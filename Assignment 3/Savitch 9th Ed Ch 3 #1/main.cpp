/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 6, 2015, 8:14 PM
 * Purpose: Savitch 9th Ed Ch 3 #1
 */

#include <iostream>
#include <iomanip>//file i/o
using namespace std;

//user functions

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {

    char    day,
            day2;
    int     time;
    float   length,
            cost;
    
    cout<<"Enter time of call in military time. (e.g. 5:30pm = 1730)\n";
    cin>>time;
    cout<<"Enter length of call in minutes.\n";
    cin>>length;
    cout<<"Enter 1st letter of day of call. (mo/tu/we/th/fr/sa/su)\n";
    cin>>day;
    cout<<"Enter 2nd letter of day of call.\n";
    cin>>day2;
    switch(day){
        case 'm':
        case 'M':
        case 'w':
        case 'W':
        case 'f':
        case 'F':
        case 'T':
        case 't':   
            
            if(time>=0800.0f && time<=1800.0f){
                
                cost=length*0.40f;
            }
            else{
                
                cost=length*0.25f;
            }
            break;
        case 's':
        case 'S':
            
            cost=length*0.15f;
            break;
        default:
            cout<<"invalid response."<<endl;
    }
    cout<<"Price of call is $"<<fixed<<setprecision(2)<<cost<<endl;
    return 0;
}

