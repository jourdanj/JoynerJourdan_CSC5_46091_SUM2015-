/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 9:30 PM
 * Purpose: Gaddis 7th ed ch 6 #6
 */

#include <iostream>
using namespace std;
//user files

//global constants

//function prototypes
void kineticEnergy(float,float);
//execution
int main(int argc, char** argv) {

    float   mass,//mass of object
            veloc;//speed of object
    cout<<"Enter mass in kg.\n";//inputs
    cin>>mass;
    cout<<"Enter speed in m/s\n";
    cin>>veloc;
    
    kineticEnergy(mass,veloc);//call function
    
    return 0;
}
//*************************************************//
//Function calculates the kinetic energy of an object//
//*************************************************//
void kineticEnergy(float a,float b){
    
    float ke=0.5f*a*b*b;//calculations
    cout<<"Kinetic Energy = "<<ke<<" N\n";//output
    
}
