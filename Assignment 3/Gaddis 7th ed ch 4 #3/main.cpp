/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 4:06 PM
 * Purpose: Gaddis 7th Ed ch 4 #3
 */

#include <iostream>//file i/o
using namespace std;

//user functions

//global constants

//user functions

//execution
int main(int argc, char** argv) {

    int day,
        month,
        year,
        magic;
    
    cout<<"Enter 2 digit month.\n";
    cin>>month;
    cout<<"Enter 2 digit day.\n";
    cin>>day;
    cout<<"Enter 2 digit year.\n";
    cin>>year;
    
    magic=day*month;
    
    if(magic==year){
        cout<<"date is MAGIC***\n";
        
    }
    else{
        cout<<" date is average.\n";    
    }
    return 0;
}

