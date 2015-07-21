/* 
 * File:   main.cpp
 * Author: jxj93_000
 * Created on July 6, 2015, 6:24 PM
 * Purpose: Savitch 9th ed ch 2 #12
 */

#include <iostream>
#include <iomanip>//file i/o
using namespace std;

//user function

//global constants

//function prototypes

//execute
int main(int argc, char** argv) {

    //declare variables
    float   radius,
            radft,
            depth,
            vcylndr,
            water;
    //obtain values
    cout<<"Please enter radius of well in inches.\n";
    cin>>radius;
    cout<<"Please enter depth of well in ft.\n";
    cin>>depth;
    
    radft=radius/12.0f;
    
    vcylndr=3.14f*(radft*radft)*depth;
    
    water=vcylndr*7.48f;
    
    cout<<"The well can hold "<<fixed<<setprecision(0)<<water
            <<" gallons of water.\n";
    
    
    
    
    
    return 0;
}

