/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 8:47 PM
 * Purpose: Gaddis 7th ed ch 6 #11
 */

#include <iostream>
#include <iomanip>
using namespace std;

//user files

//global constants

//function prototypes
float getJudgeData();
void calcScore(float,float,float,float,float);
int main(int argc, char** argv) {
    
    float   score1,
            score2,
            score3,
            score4,
            score5;
    score1= getJudgeData();//function calls
    score2= getJudgeData();
    score3= getJudgeData();
    score4= getJudgeData();
    score5= getJudgeData();
   
    calcScore(score1,score2,score3,score4,score5);
    return 0;
}
//*************************************************************//
//Collect judge's scores
//**********************************************************//
float getJudgeData(){
    float a;
    cout<<"What was the judges score?\n";
    cin>>a;
    
    return a;        
}
//****************************************************************************//
//Determine the average of the judge's scores while discarding the high and low
//***************************************************************************//
void calcScore(float a,float b, float c, float d, float e){
    float   high=0,
            low=10,
            avg;
    
    if(high<a){//determine high
        high=a;
    }
    if(high<b){
        high=b;
    }
    if(high<c){
        high=c;
    }
    if(high<d){
        high=d;
    }
    if(high<e){
        high=e;
    }
    if(low>a){//determine low
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
    
    avg=(a+b+c+d+e-high-low)/3;//calculate average
    
    cout<<"The Average of the 3 mid scores is "<<fixed<<setprecision(1)<<avg;
    cout<<endl;//output
    
}


