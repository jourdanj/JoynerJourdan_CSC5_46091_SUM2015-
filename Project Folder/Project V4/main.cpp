/* 
 * File:   mainV4.cpp
 * Author: Jourdan Joyner
 * Created on July 21, 2015, 2:37AM
 * Purpose: C++ Project
 */

//file libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//#define GAME_FILE "escape_the_house.dat"//read in for the world data
#define CONTINUE    1
#define QUIT            0
#define N_LOOKS     3
struct Area{//structure that holds the info for the main area
    
    string strCurrentArea;//name of current area
    string strDescription;//description of current area
    string strNorth;//name of area to the north
    string strEast;//name of area to the south
    string strSouth;//name of area to the east
    string strWest;//name of area to the west 
    string strView[N_LOOKS];//name of item to view
    string strViewDescription;//name of the item to view
    string strInventory;//holds items
};
//function prototypes
void DisplayArea(Area &area);
void GetAreaInfo(ifstream &fin,Area &area);
void Move(ifstream &fin,Area &area,string);
int Input(ifstream &fin,Area &area);
bool CheckView(Area &area, string);
void GetView(ifstream &fin,Area &area,string);
void DisplayView(Area &area);
void Safe(Area &area);
void iPad_Puzzle();
//execution
clock_t t;
int main(){

    ifstream fin;//pointer that opens and reads from file

    Area area;//area structure data
    char game_File[]="escape_the_house.dat";
    fin.open(game_File);

    if(fin.fail()){
        cout<<"UNABLE TO FIND GAME FILE\n";

        return -1;
    }
    fin>>area.strCurrentArea>>area.strCurrentArea;//reads in the start point for the game
        
    GetAreaInfo(fin,area);//calls function to receive info from the file

    DisplayArea(area);//calls function to display the area to the user
    
    while(1){//main game loop


       if(Input(fin,area)==QUIT){//if user enters quit, game ends
           fin.close();
           break;
      
        }
    }

    fin.close();//closes file

    return 0;
}
/**********************************************************/
/*DisplayArea                                              *
/Function is called to display strDescription              *
/**********************************************************/
void DisplayArea(Area &area)
{
    cout<<area.strDescription<<endl;//displays area description		
}
/**********************************************************/
/*GetAreaInfo                                              *
/Function receives strCurrentArea and retrieves            *
/strDescription, strNorth, strSouth, strEast, and strWest  *
/information from the file                                 *
/**********************************************************/
void GetAreaInfo(ifstream &fin,Area &area){

    string strReadLine="";
    string strTemp="";//temporary for reading in info
    int count=0,i=0;

    string strArea="<"+area.strCurrentArea+">";//looks for the room name in brackets to find easier i.e instead of main it reads in <main>

    fin.seekg(0,ios::beg);//starts the header search from the beginning of the file

    fin.clear();//allows the file to be read through multiple times

    while(getline(fin, strReadLine, '\n')){//while loop reads file til it finds the correct area heading
        fin>>strReadLine;
        if(strReadLine==strArea){

            getline(fin,area.strDescription,'*');//if it finds the correct area heading, it reads its info  til it hits the *	

            // Read past the direction blocks (I.E. <north>) and store the room name for that direction
            fin>>strTemp>>area.strNorth;				
            fin>>strTemp>>area.strEast;				
            fin>>strTemp>>area.strSouth;				
            fin>>strTemp>>area.strWest;//it then read in the surrounding area titles by skipping their <area> descriptors				
            
            fin>>strTemp>>count;//count reads in the number of viewable items in a room		

            for(i=0;i<N_LOOKS;i++){
                area.strView[i] = "";	//initializes array to be empty	
            }
            
            for(i=0;i<(count%N_LOOKS);i++){
                fin>>area.strView[i];//stores available views
            }

            return;									
        }
    }
}
/**********************************************************/
/*Move                                                     *
/Function is called to move through the                    *
/game if there is an area in that direction                *
/**********************************************************/
void Move(ifstream &fin,Area &area, string strArea){
    
    if(strArea=="None"){//detects if there is no area in the direction inputted				
	
        cout<<"You are unable to travel that way\n";//displays error message and returns the function
        return;									
    }
    if(strArea=="Locked"){
        
        cout<<"This door is locked.\n";//Displays error message if a locked door is approached
        if(area.strInventory=="key"){
         
            cout<<"You use the key to unlock the door.\n";
            
            area.strCurrentArea="Office";// Sets the current area to the new one

            GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

            DisplayArea(area);// Displays current area
        }
                
        return;
    }
    if(strArea=="Boarded"){
        
        cout<<"This door is boarded up tight, Not getting out this way.\n";//Displays error message if back door is approached
        return;
    }
    if(strArea=="Safe"){
       
        Safe(area);

	return;
    }
    if(strArea=="Window"){//final room in game
        
        area.strCurrentArea=strArea;// Sets the current area to the new one

	GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

	DisplayArea(area);// Displays current area   
    }
    else{
        
        area.strCurrentArea=strArea;// Sets the current area to the new one

	GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

	DisplayArea(area);// Displays current area
	
    }
}
/**********************************************************/
/*Input                                                    *
/Main game movement feature. Receives user input and       *
/reacts to it accordingly to progress through the game     *
/**********************************************************/
int Input(ifstream &fin, Area &area){
    
    string strInput="";//holds user input
    if(area.strCurrentArea=="Window"){
        strInput="quit";
    }
    else{
        cout<<endl<<":";//displays prompt
        cin>>strInput;//reads in the user input
    }
    if(strInput=="look"){
        DisplayArea(area);//calls function to give current area description
    }
    else if(strInput=="inspect"){
        cout<<"What would you like to inspect?\n";
        cin>>strInput;
        
        if(CheckView(area,strInput)){
            GetView(fin,area,strInput);
            DisplayView(area);
            if(strInput=="ipad"){
                iPad_Puzzle();
            }
        }
        else{
            cout<<"Nothing matching that description around here.\n";
        }
    }
    else if(strInput=="north"){
        Move(fin,area,area.strNorth);//calls function to move north if possible
    }
    else if(strInput=="east"){
        Move(fin,area,area.strEast);//calls function to move east if possible
    }
    else if(strInput=="west"){
        Move(fin,area,area.strWest);//calls function to move west is possible
    }
    else if(strInput=="south"){//calls function to move south if possible
        Move(fin,area,area.strSouth);
    }
    else if(strInput=="help"||strInput=="?"){//displays commands to user
        cout<<"To move, Enter: north east west south\n";
        cout<<"For room description, enter: look\n";
        cout<<"To inspect something, enter inspect, then enter its name.\n";
        cout<<"To exit game, enter: quit. To open this text, enter: help or ?\n";
    }
    else if(strInput=="quit"){//ends game
        cout<<"Game Over\n";
        return QUIT;
    }
    else{//displays when invalid input is received
        cout<<"Invalid input\n";
    }
    
    return CONTINUE;
}
/**********************************************************/
/*CheckView                                                *
/Receives user input to determine whether or not an object *
/is available to view                                      *
/**********************************************************/
bool CheckView(Area &area, string strLook){
    
    for(int i=0;i<N_LOOKS;i++){
        if(strLook==area.strView[i])//if searched word is in array, return true		
            return true;						
    }	
   //else return false.
    return false;								
}
/**********************************************************/
/*GetView                                                  *
/Receives user input to output description of an object    *
/**********************************************************/
void GetView(ifstream &fin, Area &area,string strLook){
    
    string strV_Area="<"+area.strCurrentArea+"|"+strLook+">";
    string strLine="";
    fin.seekg(0,ios::beg);//starts the header search from the beginning of the file

    fin.clear();//allows the file to be read through multiple times
    
    while(getline(fin, strLine, '\n')){//while loop reads file til it finds the correct area heading
        fin>>strLine;
        if(strLine==strV_Area){

            getline(fin,area.strViewDescription,'*');//if it finds the correct area heading, it reads its info  til it hits the *
            
            return;
        }
    }
}
/**********************************************************/
/*DisplayView                                              *
/Function is called to display strViewOut                  *
/**********************************************************/
void DisplayView(Area &area)
{
    cout<<area.strViewDescription<<endl;//displays view description		
}
/**********************************************************/
/*Safe                                                     *
/Function is called to interact with the safe              *
/**********************************************************/
void Safe(Area &area){
    
    const int CODE=4;
    int code[4];
    cout<<"Enter the 4 digit combination.\n";//code is learned by solving puzzles on select view items in game
    
    for(int i=0;i<CODE;i++){
        
       if(i==0){
           cout<<"Enter "<<i+1<<"st digit.\n";//output to request code input
       }
       else if(i==1){
           cout<<"Enter "<<i+1<<"nd digit.\n";
       }
       else if(i==2){
           cout<<"Enter "<<i+1<<"rd digit.\n";
       }else if(i==3){
           cout<<"Enter "<<i+1<<"th digit.\n";
       }
        cin>>code[i];
    }
    if(code[0]==5 && code[1]==1 && code[2]==8 && code[3]==5){//correct code received.
        cout<<"SUCCSESS! You have managed to open the vault!\n";
        cout<<"You retrieved the key from the safe.\n";
        area.strInventory="key";
        
        return;
    }
    else{
        "Incorrect combination.\n";
        
        return;
    }
    
}
/**********************************************************/
/*ipad_puzzle                                              *
/Function is called to output a 2D array as a              *
/ clue to the player                                       *
/**********************************************************/
void iPad_Puzzle(){
    
    const int FOUR=4;
    const int COL=5;
    int puzzle[COL][FOUR];
    
    for(int i=0;i<COL;i++){
        for(int j=0;j<FOUR;j++){
            puzzle[i][j]=(6-j)*(2+i)-2;
        }
    }
    cout<<"<2- Whats the greatest common factor?>\n";
    for(int i=0;i<COL;i++){
        for(int j=0;j<FOUR;j++){
            cout<<puzzle[i][j]<<'\t';
        }
        cout<<endl;
    }
    return;
}
