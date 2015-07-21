/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 10:09 PM
 * Purpose: Gaddis 7th ed ch 6 #10
 */

#include <iostream>
using namespace std;

//user libraries

//global constants

//function prototypes
int getScore();
void calcAverage(int,int,int,int,int);
int findLowest(int,int,int,int,int);
//execute
int main(int argc, char** argv) {

    int     t1,
            t2,
            t3,
            t4,
            t5;
            
    t1=getScore();
    t2=getScore();
    t3=getScore();
    t4=getScore();
    t5=getScore();
    
    calcAverage(t1,t2,t3,t4,t5);
    return 0;
}
//****************************
//getScore receives the score input and test if its within bounds
//*******************************
int getScore(){
    int x;
    cout<<"Enter test score.\n";
    do{
        cin>>x;
    }while (x>100 || x<0);
    
    return x;
}
//****************************
//findLowest determines lowest input
//*******************************
int findLowest(int a,int b,int c,int d,int e){
   
    int low=100;
    
    if(low>a){
        low=a;
    }
    if(low>b){
        low=b;
    }
    if(low>c){
        low=c;
    }
    if(low>d){
        low=d;
    }
    if(low>e){
        low=e;
    }
   
    return low;
}
//****************************
//calcAverage discards lowest score and averages the remaining values,
//then outputs
//*******************************
void calcAverage(int a,int b,int c,int d,int e){
   int low=findLowest(a,b,c,d,e);
   int avg=(a+b+c+d+e-low)/4;
   cout<<"Average = "<<avg;
}


