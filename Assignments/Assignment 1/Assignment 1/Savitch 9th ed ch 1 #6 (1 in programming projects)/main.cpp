/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on June 23, 2015, 5:26 PM
 * Purpose: Savitch 9th Ed. Problem 6 (#1 in programming projects)
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
    int one, two, totm, tota;
    //input values here
    cout<<"Hello!\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter a number:\n";
    
    cin>>one;
    
    cout<<"Enter another number.\n";
    cin>>two;
    totm=one*two;
    tota=one+two;
    //output unknowns here
    cout<<one<<" plus "<<two<<" equals "<<tota<<endl;
    cout<<"and "<<one<<" times "<<two<<" equals "<<totm<<endl;
    cout<<"This is the end of the program. Goodbye!\n";
    //exit
    return 0;
}

