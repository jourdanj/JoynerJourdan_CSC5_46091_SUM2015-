/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 2, 2015, 2:46 PM
 * Purpose: Savitch 9th Ed. Ch. 2 #2
 */

#include <iostream> //file i/o
using namespace std;

//User Functions

//Global constants

//Functions Prototypes

//Execution begins
int main(int argc, char** argv) {

    //declare variables
    float   annualp,//previous annual salary
            retrop, //retroactive pay
            annualn, //new annual salary
            monthn; //new monthly salary
    const float raise=0.076f; //7.6 percent raise
    char ans; //to repeat 
    
    do{
        
    //calculations
    
    cout<<"Enter previous annual salary"<<endl;
    cin>>annualp;
    retrop=(annualp/2)*raise;
    annualn=retrop+annualp;
    monthn=annualn/12.0f;
    
    cout<<"$"<<retrop<<" in retroactive pay due.\n";
    cout<<"Your new annual salary is $"<<annualn<<endl;
    cout<<"You will now make $"<<monthn<<" per month before takes\n";
    cout<<"Repeat calculations? press y/n\n";
    cin>>ans;
    
            
    }while(ans=='y'||ans=='Y');
        
    return 0;
}

