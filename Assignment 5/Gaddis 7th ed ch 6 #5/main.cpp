/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 5:55 PM
 * Purpose: Gaddis 7th ed ch 6 # 5
 */

#include <iostream>
#include <iomanip>//file io
using namespace std;

//user files

//global constants

//function prototypes
float fallingDistance(float);
//execution
int main(int argc, char** argv) {

    float   time=1,//time sarts at 1, ends at 10
            dist;//distance traveled
    
    do{
        dist=fallingDistance(time);//function call
        cout<<"After "<<setw(2)<<time<<" seconds, object fell "<<setw(5);
        cout<<dist<<" meters\n";//output
        time++;//raise counter
    }while(time<=10);
    
    return 0;
}
//************************************************************************//
//Function calculates distance fallen due to gravity over a period of time//
//************************************************************************//
float fallingDistance(float time){
    
    float d=0.5f*9.f*time*time;
    return d;
}

