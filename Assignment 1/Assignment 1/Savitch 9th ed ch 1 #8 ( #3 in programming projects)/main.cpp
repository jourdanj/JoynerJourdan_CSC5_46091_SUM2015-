/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on June 23, 2015, 6:08 PM
 * Purpose: Savitch 9th Ed. #8 (#3 in programming projects)
 */

//system libraries
#include <iostream> // file i/o
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {

   //declare variables
    int nic, dime, quart, cnic, cdime, cquart;
    float tot;
   // input values here
    cout<<"Enter number of nickels."<<endl;
    cin>>nic;
    cnic=nic*5.0f;
    cout<<"Enter number of dimes."<<endl;
    cin>>dime;
    cdime=dime*10.0f;
    cout<<"Enter number of quarters."<<endl;
    cin>>quart;
    cquart=25.0f*quart;
    //output unknowns
    tot=cnic+cdime+cquart;
    cout<<"You have "<<tot<<" cents."<<endl;
    //exit
    return 0;
}

