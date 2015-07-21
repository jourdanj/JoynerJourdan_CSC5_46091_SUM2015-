/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 5, 2015, 3:46 PM
 * Purpose: Savitch 9th Ed Ch 2 #5
 */

#include <iostream>//file i/o
using namespace std;

//User Functions

//Global Constants

//Function Prototypes

//Execution begins
int main(int argc, char** argv) {   
    char ans;
    do{
        //declare variables
        float roomcap,headcnt;
        //read in values;
        cout<<"Enter maximum capacity of room.\n";
        cin>>roomcap;
        cout<<"Enter number of people attending meeting.\n";
        cin>>headcnt;
        //output
        if(headcnt<=roomcap){
            cout<<"Number of people is adequate, the meeting may continue\n";
            cout<<"as planned.\n"<<"Repeat calculations? press y/n\n";

            }
        else{
            cout<<"TOO MANY PERSONS IN ROOM. MEETING MUST BE ADJUSTED.\n";
            cout<<"Repeat calculations? Press y/n\n";
            }
        cin>>ans;
        }while(ans== 'y'||ans=='Y');
    
    return 0;
}

