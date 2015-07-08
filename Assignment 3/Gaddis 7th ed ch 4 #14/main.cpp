/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 5:20 PM
 * Purpose: Gaddis 7th ed ch 4 #14
 */

#include <iostream>
#include <string>//file i/o
using namespace std;

//user functions

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    string  runner1,
            runner2,
            runner3;
    float   time1,
            time2,
            time3;
    
    cout<<"ENTER NAME OF RUNNER 1\n";
    cin>>runner1;
    cout<<"ENTER TIME OF RUNNER 1\n";
    cin>>time1;
    cout<<"ENTER NAME OF RUNNER 2\n";
    cin>>runner2;
    cout<<"ENTER TIME OF RUNNER 2\n";
    cin>>time2;
    cout<<"ENTER NAME OF RUNNER 3\n";
    cin>>runner3;
    cout<<"ENTER TIME OF RUNNER 3\n";
    cin>>time3;
    
    if(time1>0 && time2>0 && time3>0){
        if(time1<time2 && time1<time3){
            if(time2<time3){
                cout<<"1st: "<<runner1<<endl;
                cout<<"2nd: "<<runner2<<endl;
                cout<<"3rd: "<<runner3<<endl;
            }
            else if(time3<time2){
                cout<<"1st: "<<runner1<<endl;
                cout<<"2nd: "<<runner3<<endl;
                cout<<"3rd: "<<runner2<<endl;
                
            }
            else if(time3==time2){
                cout<<"1st: "<<runner1<<endl;
                cout<<"T-2nd: "<<runner2<<endl;
                cout<<"T-2nd: "<<runner3<<endl;
            }
        }
        else if(time2<time1 && time2<time3){
            if(time1<time3){
                cout<<"1st: "<<runner2<<endl;
                cout<<"2nd: "<<runner1<<endl;
                cout<<"3rd: "<<runner3<<endl;
                
            }
            else if(time3<time1){
                cout<<"1st: "<<runner2<<endl;
                cout<<"2nd: "<<runner3<<endl;
                cout<<"3rd: "<<runner1<<endl;
                
            }
            else if(time1==time3){
                cout<<"1st: "<<runner2<<endl;
                cout<<"T-2nd: "<<runner1<<endl;
                cout<<"T-2nd: "<<runner3<<endl;
                
            }
        }
        else if(time3<time1 && time3<time2){
            if(time1<time2){
                cout<<"1st: "<<runner3<<endl;
                cout<<"2nd: "<<runner1<<endl;
                cout<<"3rd: "<<runner2<<endl;               
            }
            else if(time2<time1){
                cout<<"1st: "<<runner3<<endl;
                cout<<"2nd: "<<runner2<<endl;
                cout<<"3rd: "<<runner1<<endl;               
            }
            else if(time1==time2){
                cout<<"1st: "<<runner3<<endl;
                cout<<"T-2nd: "<<runner1<<endl;
                cout<<"T-2nd: "<<runner2<<endl;
            }
        }
        else if(time1==time2 && time1==time3){
            cout<<"3-way tie. No winner\n";
        }
    }
    else{
        cout<<"INVALID TIME INPUT.\n";
    }
    return 0;
}

