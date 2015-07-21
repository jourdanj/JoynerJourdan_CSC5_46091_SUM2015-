/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 1:45 PM
 * Purpose: Gaddis 7th ed ch 5 #11
 */

#include <iostream>
#include <iomanip>//file librarie
using namespace std;

//user functions

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {

    float   bug,//starting amnt of organism
            pcnt,//percent increase as whole number
            trupcnt,//pcnt/100 + 1
            pop,//population total
            days,//days to run
            i=2;// day increase starts
    cout<<"Enter starting number of organisms greater than or equal to 2\n";
    cin>>bug;
    cout<<"Enter daily population increase as a positive % (e.g. 50=50%)\n";
    cin>>pcnt;
    cout<<"Enter # of days(greater than 1) the population will increase.\n";
    cin>>days;
    if(bug>=2 && pcnt>0 && days>1){//input validation
        cout<<"Day "<<setw(3)<<1<<" Population average = "<<setw(5)<<bug<<endl;
        //1st day no increase
        
        for(i;i<=days;i++){
            trupcnt=1+(pcnt/100); 
            pop=bug*trupcnt;//calc pop increase
            bug=0;//reset to keep numbers correct
            bug+=pop;//calc tot pop

            cout<<"Day "<<setw(3)<<setprecision(0)<<i<<" Population average = ";
            cout<<setw(5)<<fixed<<setprecision(1)<<pop<<endl;
            //output
        }
    }
    else{//incorrect vale input
        cout<<"ERROR. INVALID INPUT\n";
    }
    return 0;
}

