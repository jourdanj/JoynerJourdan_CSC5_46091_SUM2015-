/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on June 23, 2015, 5:35 PM
 * Purpose: Savitch 9th Ed. CH 1 Problem 5
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
    int length, width, tfence;
    //input values here
    cout<<"Hello!\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter length of plot (in ft):\n";
    
    cin>>length;
    
    cout<<"Enter width of plot (in ft):\n";
    cin>>width;
    tfence=width+width+length+length;
    //output unknowns here
    cout<<"If you have a plot "<<width<<" ft wide\n";
    cout<<"and "<<length<<" ft long, then\n";
    cout<<"you need "<<tfence<<" ft of fencing.\n";
    cout<<"Goodbye!\n";
    //exit
    return 0;
}

