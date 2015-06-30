/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on June 23, 2015, 6:53 PM
 * Purpose: Savitch 9th Ed. Ch 1 Problem 10 (#5 in programming projects)
 */

//system libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    
    //declare variables
    char a;
    //input values
    cout<<"Input a letter."<<endl;
    cin>>a;
    //output unknowns
    cout<<"            \n";
    cout<<"  "<<a<<" "<<a<<" "<<a<<endl;
    cout<<" "<<a<<"    "<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<" "<<a<<"    "<<a<<endl;
    cout<<"  "<<a<<" "<<a<<" "<<a<<endl;
    //exit
    return 0;
}

