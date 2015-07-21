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
using namespace std;

#define GAME_FILE "escape_the_house.txt"//read in for the world data
#define CONTINUE    1
#define QUIT            0

//user libraries
struct Area{//structure that holds the info for the main area

    string strCurrentArea;//name of current area
    string strDescription;//description of current area
    string strNorth;//name of area to the north
    string strEast;//name of area to the south
    string strSouth;//name of area to the east
    string strWest;//name of area to the west    
};
//global constants

//function prototypes
void DisplayArea(Area &area);
void GetAreaInfo(ifstream &fin,Area &area);
void Move(ifstream &fin,Area &area,string);
int Input(ifstream &fin,Area &area);
//execution
int main(){

    ifstream fin;//pointer that opens and reads from file
    Area area;//area structure data
    string dump="";
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
    
    string strInput="";//holds user input
    
    cout<<endl<<":";//displays prompt
    cin>>strInput;//reads in the user input
    
    if(strInput=="look"){
        DisplayArea(area);//calls function to give current area description
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

