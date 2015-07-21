/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 13, 2015, 6:53 PM
 * Purpose: Gaddis 7th Ed ch 5 # 1
 */

#include <iostream>//i/o libraries
using namespace std;

//User functions

// Global Constants

//Function proto1types

//execution begins
int main(int argc, char** argv) {
    
    int     num,//input number
            sum,//sum of numbers
            i;//counter
    
    cout<<"Enter a positive integer.\n";
    cin>>num;
   
    if(num<0){//reject inputs <0
        cout<<"You cannot follow directions.\n";
        
    }
    else{
        for(i==0;i<=num;i++){//loop to count
            sum+=i;
            
        }
        cout<<"Sum of integers to "<<num<<" is "<<sum<<endl;//output solution
    }

    return 0;
}

