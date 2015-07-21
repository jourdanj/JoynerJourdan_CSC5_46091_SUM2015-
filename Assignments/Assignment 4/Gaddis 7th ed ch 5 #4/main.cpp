/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 3:22 PM
 * Purpose: Gaddis 7th ed ch 5 #4
 */

#include <iostream>
#include <iomanip>//libraries
using namespace std;

//user functions

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {

    float cal;//calories burned
    int time=0;//time in minutes
    
    for(time;time<=35;time++){//runs for 35 minutes
        
        cal+=3.9;//total cal calculation
        
        while(time==10||time==15||time==20||time==25||time==30){//output for 10,15,20,25,30
            cout<<"At "<<time<<" minutes, "<<setw(5)<<cal<<" cals burned.\n";
            break;
        }
    }
    
    return 0;
}

