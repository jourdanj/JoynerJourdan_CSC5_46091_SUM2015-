/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 3:39 PM
 * Purpose: Gaddis 7th ed ch 5 # 17
 */

#include <iostream>
#include <iomanip>//libraires
using namespace std;

//user functions

//global constants

//function prototypes

//execute
int main(int argc, char** argv) {
    
    int     one,
            two,
            three,
            four,
            five,
            i=0,
            p;
    string  ones,
            twos,
            threes,
            fours,
            fives;
    
    cout<<"ENTER TODAY'S SALES FOR STORE 1\n";
    cin>>one;
    cout<<"ENTER TODAY'S SALES FOR STORE 2\n";
    cin>>two;
    cout<<"ENTER TODAY'S SALES FOR STORE 3\n";
    cin>>three;
    cout<<"ENTER TODAY'S SALES FOR STORE 4\n";
    cin>>four;
    cout<<"ENTER TODAY'S SALES FOR STORE 5\n";
    cin>>five;
    
    p=one/100;
    for(i;i<p;i++){
        ones+="*";                
        }
    i=0;
    p=two/100;
    for(i;i<p;i++){
        twos+="*";
    }
    i=0;
    p=three/100;
    for(i;i<p;i++){
        threes+="*";
    }
    i=0;
    p=four/100;
    for(i;i<p;i++){
        fours+="*";
    }
    i=0;
    p=five/100;
    for(i;i<p;i++){
        fives+="*";
    }
    cout<<"SALES BAR CHART\n"<<"(Each * represents $100)\n";
    cout<<"Store 1: "<<ones<<endl;
    cout<<"Store 2: "<<twos<<endl;
    cout<<"Store 3: "<<threes<<endl;
    cout<<"Store 4: "<<fours<<endl;
    cout<<"Store 5: "<<fives<<endl;

       

    return 0;
}

