/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 9:12 PM
 * Purpose: Gaddis 7th ed ch 6 #8
 */

#include <cstdlib>
#include <iostream>//file io
using namespace std;

//user files

//global constants

//function prototypes
int coinToss();
//execute
int main(int argc, char** argv) {
    
    int     x,
            coin,
            i=0;
    
    cout<<"How many tosses do you want?\n";
    cin>>x;
    for(i;i<x;i++){
        
       coin=coinToss();
       if(coin==0){
           cout<<"heads\n";
       }
       else if(coin==1){
           cout<<"tails\n";
       }
    }
    return 0;
}
int coinToss(){
    int a;
    a=0;
    a=rand()%2;
    
    return a;
}
