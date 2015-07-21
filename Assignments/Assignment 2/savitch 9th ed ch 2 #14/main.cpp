/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 6, 2015, 7:07 PM
 * Purpose: Savitch 9th ed ch 2 #14
 */

#include <iostream>
#include <iomanip>//file i/o
using namespace std;

//user function

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    //declare variables
    int     count=1,
            input;
    float   score,
            totscor,
            grade,
            tot,
            tottot;
    
    //obtain values and solve
    
    cout<<"How many exercises to input?\n";
    cin>>input;
    
    do{
        cout<<"Enter exercise "<<count<<" score.\n";
        cin>>score;
        totscor=totscor+score;
        cout<<"Enter total points possible.\n";
        cin>>tot;
        tottot=tottot+tot;
        count++;
    }while(count<=input);
    
    grade=(totscor/tottot)*100.0f;

    cout<<"Total score is "<<fixed<<setprecision(2)<<grade<<"%"<<endl;
    
    
    return 0;
}

