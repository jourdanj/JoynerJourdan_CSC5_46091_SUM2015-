/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 4:16 PM
 * Purpose: Gaddis 7th ed ch 4 #6
 */

#include <iostream> //file i/o
using namespace std;

//user functions

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    //variables
    float mass,
          weight;
    
    cout<<"ENTER MASS OF OBJECT IN KILOGRAMS.\n";
    cin>>mass;
    
    if(mass>=1000){
        cout<<" Object is too heavy.\n";
    }
    else if(mass<=10){
        cout<<"Object is too light.\n";
    }
    else{
        weight=mass*9.8f;
        cout<<"Object of mass "<<mass<<" kg\nhas a weight of ";
        cout<<weight<<" Newtons\n";
    }
    return 0;
}

