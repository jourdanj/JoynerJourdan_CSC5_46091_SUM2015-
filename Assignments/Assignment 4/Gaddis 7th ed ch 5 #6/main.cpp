/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 11:09 AM
 * Purpose: Gaddis 7th Ed ch 5 #6
 */

#include <iostream>//fileio
using namespace std;

//User function

//Global Constants

//function prototypes

//execution begins
int main(int argc, char** argv) {

    float   speed,
            dist,
            totdist;
    int     time,
            i;
    
    cout<<"Enter a positive distance\n";
    cin>>dist;
    cout<<"Enter a time in hours greater than 1.\n";
    cin>>time;
    speed=dist/time;
    cout<<"  Speed in mph = "<<speed<<endl;
    cout<<"Hours traveled = "<<time<<endl;
    cout<<""<<endl;
    cout<<"Hour         Time\n";
    
    if(time>1 && dist>0){//qualifiers for loop time must be > 1 and distance >0
        for(i==0;i<=time;i++){
            
            totdist+=dist;//sum total distance traveled over time
            cout<<"  "<<i<<"          "<<totdist<<endl;//output
        
            
        }
        
    }
    else{
        cout<<"Invalid Input\n";//if requirements aren't met.
    }
    return 0;
}

