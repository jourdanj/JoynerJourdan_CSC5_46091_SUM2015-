/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 6, 2015, 5:53 PM
 *Purpose: Savitch 9th Ed ch 2 #11
 */

#include <iostream>
#include <iomanip>//file i/o
using namespace std;

//User functions

//Global COnstants

//Function Prototypes

//execution begins
int main(int argc, char** argv) {
 
    //declare variables
    float     t1,
              t2,
              vsound;
    cout<<"Enter an initial and final temperature (in Celsius)\n";
    cin>>t1>>t2;
    do{
        vsound=331.3f+0.61f*t1;
        cout<<"At "<<fixed<<setprecision(0)<<t1<<" degrees Celsius,";
        cout<<" the velocity of sound is "<<fixed<<setprecision(2)<<
                vsound<<" m/s"<<endl;
        t1++;
    }while(t1<=t2);
    
    
    
    return 0;
}

