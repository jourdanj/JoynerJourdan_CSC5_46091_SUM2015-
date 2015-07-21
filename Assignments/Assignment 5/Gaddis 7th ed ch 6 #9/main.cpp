/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 6:47 PM
 * Purpose: Gaddis 7th ed ch 6 #9
 */

#include <iostream>
#include <cmath>
using namespace std;

//user files

//global constants

//function prototypes
float presentValue(float,float,float);
//execution
int main(int argc, char** argv) {
   
    float   dep,//intial deposit
            future,//future amount
            rate,//rate
            time;//# of years
    
    cout<<"Enter the future amount of money you want.\n";//inputs
    cin>>future;
    cout<<"Enter your rate.\n";
    cin>>rate;
    cout<<"Enter the amount of years to wait.\n";
    cin>>time;
    dep= presentValue(future,rate,time);//call function
    
    cout<<"For a future amount of $"<<future<<" with a "<<rate<<"% after "<<time;
    cout<<" years, you need to put down $"<<dep;//output
            

    return 0;
}
//********************************************************************//
//Reads in future value, rate, and alloted time, to output deposit.
//*******************************************************************//
float presentValue(float a, float b, float t){
    
    float deposit;
    b=b/100;
     deposit=(a/pow((1+b),t));

   
    return deposit;
}
