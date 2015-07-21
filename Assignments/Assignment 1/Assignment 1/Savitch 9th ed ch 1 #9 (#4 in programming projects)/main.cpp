/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on June 23, 2015, 6:26 PM
 * Purpose: Savitch 9th Ed. Problem 9 (#4 in programing projects)
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
    float dist, accel, time, rdist;
    //input values
    accel=32.0f; //acceleration= 32ft/s
    cout<<"Enter a time in seconds."<<endl;
    cin>>time;
    //output unknowns
    dist=accel*time*time;
    rdist=dist/2;
    cout<<"Assume that the object starts at rest, there is no friction\n";
    cout<<"or resistance from air. The object in free fall for "<<time;
    cout<<" seconds would fall\n"<<rdist<<" feet."<<endl;
    
    return 0;
}

