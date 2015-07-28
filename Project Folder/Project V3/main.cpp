/* 
 * File:   mainV3.cpp
 * Author: Jourdan Joyner
 * Created on July 21, 2015, 2:37AM
 * Purpose: C++ Project
 */

//file libraries
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

#define GAME_FILE "escape_the_house.txt"//read in for the world data
#define CONTINUE    1
#define QUIT            0

//global constants
//const int COUNT=10;//#of items possible to fit in inventory
//user libraries
struct Area{//structure that holds the info for the main area
    
    string strCurrentArea;//name of current area
    string strDescription;//description of current area
    string strNorth;//name of area to the north
    string strEast;//name of area to the south
    string strSouth;//name of area to the east
    string strWest;//name of area to the west 
    string strView;//name of item to view
    string strViewOut;//name of the item to view
    string strInventory/*[COUNT*/;//Inventory of items
};
//function prototypes
void DisplayArea(Area &area);
void GetAreaInfo(ifstream &fin,Area &area);
void Move(ifstream &fin,Area &area,string);
int Input(ifstream &fin,Area &area);
void GetView(ifstream &fin,Area &area,string);
void DisplayView(Area &area);
void Safe(Area &area);
void InventorySearch(Area &area);
void InventorySort(Area &area);
void DisplayInventory(Area &area);

//execution
int main(){

    ifstream fin;//pointer that opens and reads from file
    Area area;//area structure data
    
    fin.open(GAME_FILE);

    if(fin.fail()){
        cout<<"UNABLE TO FIND GAME FILE\n";

        return -1;
    }
    fin>>area.strCurrentArea>>area.strCurrentArea;//reads in the start point for the game
     cout<<area.strCurrentArea<<endl;
        
    GetAreaInfo(fin,area);//calls function to receive info from the file

    DisplayArea(area);//calls function to display the area to the user
   
    while(1){//main game loop


       if(Input(fin,area)==QUIT){//if user enters quit, game ends
           break;
        }
    }

    fin.close();//closes file

    return 0;
}
/**********************************************************/
//*****************DisplayArea*****************************/
//******Function is called to display strDescription*******/
/**********************************************************/
void DisplayArea(Area &area)
{
    cout<<area.strDescription<<endl;//displays area description		
}
/**********************************************************/
//*****************GetAreaInfo*****************************/
//******Function receives strCurrentArea and retrieves*****/
//strDescription, strNorth, strSouth, strEast, and strWest*/
//**************information from the file******************/
/**********************************************************/
void GetAreaInfo(ifstream &fin,Area &area){

    string strReadLine="";
    string strTemp="";//temporary for reading in info

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
            fin>>strTemp>>area.strView;

            return;									
        }
    }
}
/**********************************************************/
//*********************Move********************************/
//******Function is called to move through the*************/
//****game if there is an area in that direction***********/
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
            
            strArea="Office";// Sets the current area to the new one

            GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

            DisplayArea(area);// Displays current area
        }
                
        return;
    }
    if(strArea=="Boarded"){
        
        cout<<"This door is boarded up tight, Not getting out this way.\n";//Displays error message if back door is approached
        return;
    }
    if(strArea=="Safe2"){
       
        Safe(area);

	GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

	DisplayArea(area);// Displays current area
        
	
    }
    if(strArea=="Window"){//final room in game
        
        area.strCurrentArea=strArea;// Sets the current area to the new one

	GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

	DisplayArea(area);// Displays current area
        
        exit(1);
    }
    else{
        
        area.strCurrentArea=strArea;// Sets the current area to the new one

	GetAreaInfo(fin, area);	// Passes in the file pointer so the new area data is read	

	DisplayArea(area);// Displays current area
	
    }
}
/**********************************************************/
//*********************Input*******************************/
//******Main game mechanic feature. Receives **************/
//****user input and reacts to it accordingly to **********/
//*******progress through the game*************************/
/**********************************************************/
int Input(ifstream &fin, Area &area){
    
    string strInput="",
           strInput2="";//holds user input
    
    cout<<endl<<":";//displays prompt
    cin>>strInput;//reads in the user input
    
    if(strInput=="look"){
        DisplayArea(area);//calls function to give current area description
    }
    else if(strInput=="view"){
        cout<<"What would you like to view?\n";
        cin>>strInput2;
        GetView(fin,area,strInput2);
        DisplayView(area);
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
        cout<<"Commands: north east west south look quit help\n";
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
//*********************GetView*****************************/
//************************Receives ************************/
//****user input and reacts to it accordingly to **********/
//*******look at an object in game in detail***************/
/**********************************************************/
void GetView(ifstream &fin, Area &area,string strInput2){
    
    string strV_Area="<"+area.strCurrentArea+"|"+strInput2+">";
    string strLine="";
    fin.seekg(0,ios::beg);//starts the header search from the beginning of the file

    fin.clear();//allows the file to be read through multiple times
    
    while(getline(fin, strLine, '\n')){//while loop reads file til it finds the correct area heading
        fin>>strLine;
        if(strLine==strV_Area){

            getline(fin,area.strViewOut,'*');//if it finds the correct area heading, it reads its info  til it hits the *
            
         
        }
    }
}
/**********************************************************/
//*****************DisplayView*****************************/
//******Function is called to display strViewOut***********/
/**********************************************************/
void DisplayView(Area &area)
{
    cout<<area.strViewOut<<endl;//displays view description		
}
/**********************************************************/
//********************Safe*********************************/
//******Function is called to interact with the safe*******/
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
    if(code[0]==8 && code[1]==4 && code[2]==8 && code[3]==5){//correct code received.
        cout<<"SUCCSESS! You have managed to open the vault!\n";
        cout<<"You retrieved the key from the safe.\n";
        area.strInventory="key";
        
    }
    else{
        "Incorrect combination.\n";
    }
    
}
/**********************************************************/
//*********************DisplayInventory********************/
//*********************Outputs Inventory*******************/
/**********************************************************/
/*void DisplayInventory(Area &area){
    for(int i=0;i<COUNT;i++){
        cout<<area.strInventory[i]<<endl;  
    }
}*/
/**********************************************************/
//*********************InventorySort*********************/
//******Function is called to interact with the safe*******/
/**********************************************************/
/*void InventorySort(Area &area){
            
    int temp=-1,        
        end=9;
    
    int z=sizeof(Area.strInventory)/sizeof(Area.strInventory[0]); //Get the array size

    sort(Area.strInventory,Area.strInventory+z); //Use the start and end like this

    for(int y=0;y<z;y++){
        cout << Area.strInventory[y] << endl;
    }
}*/