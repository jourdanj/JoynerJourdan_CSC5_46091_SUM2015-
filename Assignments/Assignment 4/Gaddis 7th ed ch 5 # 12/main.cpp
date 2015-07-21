/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 2:22 PM
 * Purpose: Gaddis 7th Ed ch 5 # 12
 */

#include <iostream>
#include <iomanip>//file libraries
using namespace std;

//user functions

//global constants

//user functions

//execution begins
int main(int argc, char** argv) {
    
    float   c=20,//celsius
            f,//fahrenheit
            i=0;
    

    for(i;i<=c;i++){
        
        f=(i*1.8f)+32;//c to f conversion
        
        cout<<"Celsius = "<<setw(4)<<fixed<<setprecision(1)<<i;
        cout<<" Fahrenheit = "<<setw(4)<<fixed<<setprecision(1)<<f<<endl;
        //output
    }

    return 0;
}

