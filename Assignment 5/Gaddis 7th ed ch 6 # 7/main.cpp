/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 6:22 PM
 * Purpose: Gaddis 7th ed ch 6 #7
 */

#include <iostream>
#include <iomanip>
using namespace std;

//user files

//global constants

//function prototypes
float celsius(float);
//execution
int main(int argc, char** argv) {
    float   c,
            i=0;
    
    for(i;i<=20;i++){
        c=celsius(i);
        cout<<"Fahrenheit = "<<setprecision(0)<<setw(2)<<i;
        cout<<" Celsius = "<<fixed<<setprecision(1)<<setw(5)<<c<<endl;//output
        
    }
    return 0;
}
//******************************************//
//Converts celsius temperature to fahrenheit//
//******************************************//
float celsius(float a){
    
    float c=(5.0f/9.0f)*(a-32.0f);//calculations
    return c;
}

