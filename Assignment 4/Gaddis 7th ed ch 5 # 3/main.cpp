/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 3:11 PM
 * Purpose: Gaddis 7th ed ch 5 #3
 */

#include <iostream>
#include <iomanip>//libraries 
using namespace std;

// user function

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {
    
    int     i=1,//counter
            n=25;//25 years
    float   o;//ocean level rise
           
    for(i;i<=n;i++){
       o+=1.5;//calculations for ocean level
       cout<<"Year: "<<setw(2)<<i<<" Ocean lvl rise: "<<setw(4);
       cout<<o<<" mm.\n";
       //output
    }

    return 0;
}

