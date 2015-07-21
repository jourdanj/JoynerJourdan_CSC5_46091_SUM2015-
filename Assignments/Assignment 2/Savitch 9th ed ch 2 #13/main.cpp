/* 
 * File:   main.cpp
 * Author: jxj93_000
 * Created on July 6, 2015, 6:43 PM
 * Purpose: Savitch 9th Ed ch 2 #13
 */

#include <iostream>
#include<iomanip>
using namespace std;

//user functions

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    //declare variables
    char    x;
    float   wt,
            ht,
            age,
            bmr,
            choc;
   
    cout<<"Enter weight in lbs.\n";
    cin>>wt;
    cout<<"Enter height in inches.\n";
    cin>>ht;
    cout<<"Male or Female? press m/f.\n";
    cin>>x;
    cout<<"Enter age.\n";
    cin>>age;
            
    if(x=='m'||x=='M'){
        
        bmr=66.0f+(6.3f*wt)+(12.9f*ht)-(6.8*age);
        
    }
    else if(x=='f'||x=='F'){
        
        bmr=655.0f+(4.3f*wt)+(4.7*ht)-(4.7*age);
    }
    
    choc=bmr/230.0f;
    cout<<"You need to eat "<<fixed<<setprecision(0)<<choc<<
            " chocolate bars to maintain current weight.\n";
    return 0;
}

