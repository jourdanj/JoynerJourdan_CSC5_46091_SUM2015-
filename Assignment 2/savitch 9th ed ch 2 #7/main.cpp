/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 5, 2015, 5:20 PM
 * Purpose: Savitch 9th Ed Ch 2 #7
 */

#include <iostream>
#include <iomanip>//file i/o
using namespace std;

//User Functions

//Global Constants

//Function Prototypes

//execution begins
int main(int argc, char** argv) {

    //declare variables
    int     count=0,
            year;
    float   cost, 
            inflt,
            pcnt;
    
    cout<<"ENTER COST OF ITEM.\n";
    cin>>cost;
    cout<<"ENTER NUMBER OF YEARS FROM NOW THE ITEM WILL BE PURCHASED.\n";
    cin>>year;
    cout<<"ENTER RATE OF INFLATION AS A PERCENTAGE (e.g. 3.5).\n";
    cin>>inflt;
    
    pcnt=inflt/100.0f;
    
    while(count<year){
      cost=cost+pcnt*cost;
      count++;
    }

    cout<<"AFTER "<<year<<" YEARS, THE COST IS $";
    cout<<fixed<<setprecision(2)<<cost;
         
    
            
    
    
    return 0;
}

