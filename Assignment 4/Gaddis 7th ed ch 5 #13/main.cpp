/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 2:37 PM
 * Purpose: Gaddis 7th ed ch 5 # 13
 */

#include <iostream>// io
using namespace std;

//user functions

// global constants

// function prototypes

//executions begins
int main(int argc, char** argv) {

    int     num,//input
            lst,//least
            grt;//greatest
    cout<<"Enter integers. Press -99 to end.\n";
    do{
        cin>>num;
        if(num>grt && num!=-99){//input highest # as grt
            grt=num;
            if(lst==0){//if only 1 number input grt=lst
                lst=num;
            }
        }
        else if(num<lst && num!=-99){//input lowest # as lst
            lst=num;
            if(grt==0){//if only 1 number input lst=grt
                grt=num;
            }
        } 
    }while(num!=-99);//terminate one  -99 input
    
    cout<<"Least = "<<lst<<endl;
    cout<<"Greatest = "<<grt<<endl;//output
        
    return 0;
}

