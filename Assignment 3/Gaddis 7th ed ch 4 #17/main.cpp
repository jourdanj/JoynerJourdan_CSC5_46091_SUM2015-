/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 5:20 PM
 * Purpose: Gaddis 7th ed ch 4 #17  
 */

#include <iostream>//file i/o
using namespace std;

//user functions

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    //declare variables
    
    float wav;
    
    cout<<"input wavelength in meters\n";
    cin>>wav;
    
    if(wav>0){
        if(wav>=1e-2){
           cout<<"RADIO WAVE\n"; 
        }
        else if(wav<1e-2 && wav>=1e-3){
            cout<<"MICROWAVE\n";
        }
        else if(wav<1e-3 && wav>=7e-7){
            cout<<"INFRARED\n";
        }
        else if(wav<7e-7 && wav>=4e-7){
            cout<<"VISIBLE LIGHT\n";
        }
        else if(wav<4e-7 && wav>=1e-8){
            cout<<"ULTRAVIOLET LIGHT\n";
        }
        else if(wav<1e-8 && wav>=1e-11){
            cout<<"X RAYS\n";
        }
        else if(wav<=1e-11){
            cout<<"GAMMA RAYS\n";
        }
    }
    else{
        cout<<"Invalid wavelength\n";
    }
    return 0;
}

