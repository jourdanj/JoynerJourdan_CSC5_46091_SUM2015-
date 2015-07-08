/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 6:11 PM
 * Purpose: Gaddis 7th ed ch 4 #18 
 */

#include <iostream>
#include<iomanip>//file i/o
using namespace std;

//user functions

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    float  air=1100.0f,
           steel=16400.0f,
           water=4900.0f,
           time,
           dist;
    int x;
    cout<<"Enter distance traveled in feet\n";
    cin>>dist;
    if(dist>0){
        cout<<"Press 1 for speed of sound in air\n";
        cout<<"Press 2 for speed of sound in water\n";
        cout<<"Press 3 for speed of sound in steel\n";
        cin>>x;
    
        switch(x){
                case 1:
                
                    time=dist/air;
                    cout<<"Time traveled = "<<fixed<<setprecision(4)<<time;
                    cout<<" seconds\n";
                break;
              
                case 3:
                    time=dist/steel;
                    cout<<"Time traveled = "<<fixed<<setprecision(4)<<time;
                    cout<<" seconds\n";
                break;
                
                case 2:    

                    time=dist/water;
                    cout<<"Time traveled = "<<fixed<<setprecision(4)<<time;
                    cout<<" seconds\n";
                break;
                default:
                    cout<<"INVALID CHOICE\n";
        }
    }
    else{
        cout<<"INVALID INPUT\n";
    }
                
    return 0;
}

