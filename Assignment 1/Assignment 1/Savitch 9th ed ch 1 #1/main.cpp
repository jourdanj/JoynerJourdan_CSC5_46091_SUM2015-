/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on June 23, 2015, 5:04 PM
 * Purpose: Savitch 9th Ed. Problem 1
 */

//system libraries
#include <iostream> //file I/O
using namespace std; //std namespace -> iostream

//user libraries

//global constraints

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables here
    int npods, peapp, ptot;
    //input values here
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>npods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peapp;
    ptot=npods*peapp;
    //output unknowns here
    cout<<"If you have "<<npods<<" pea pods\n";
    cout<<"and "<<peapp<<" peas in each pod, then\n";
    cout<<"you have "<<ptot<<" peas in all the pods.\n";
    //exit
    return 0;
}

