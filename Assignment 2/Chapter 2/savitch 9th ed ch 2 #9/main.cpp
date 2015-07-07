/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 6, 2015, 4:31 PM
 * Purpose: Savitch 9th ed ch 2 #9
 */

#include <iostream>//file i/o
using namespace std;

//user functions

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {
    //declare variables
    float   a,
            count=0,
            sump,
            sumn,
            sumt;
    //obtain values & output
    cout<<"ENTER 10 POSITIVE OR NEGATIVE VALUES.\n";
    do{
        cin>>a;
        if (a>0){
        sump=sump+a;
        count++;
    }
        else if(a<=0){
        sumn=sumn+a;
        count++;
    }
        sumt=sumt+a;
    }while(count<10);
    cout<<"Sum of Positives = "<<sump<<endl;
    cout<<"Sum of Negatives = "<<sumn<<endl;
    cout<<"Sum of Total = "<<sumt<<endl;
    
        
    return 0;
}

