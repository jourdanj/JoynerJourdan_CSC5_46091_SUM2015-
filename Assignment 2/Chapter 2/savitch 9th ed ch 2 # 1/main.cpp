/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 1, 2015, 6:47 PM
 * Savitch 9th Ed. ch 2 problem 1
 */

#include <iostream> //file i/o
#include <iomanip>
using namespace std; 

//user functions

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {
    char ans;
    do{
        //declare variables
        float 
              wtsoda=350.0f,    //weight of soda in g=350g
              fwtpson,          //final weight of person after diet
                wtg,            //wt in g
              swtnrps,         //sweetener per soda
              ncans,           //#of cans of soda til kill
              nkill=0.143f,     //1/7 body weight=kill
              a;                //1/7 body weight
        
         const float swtsoda=0.001f; //percent of sweetener in soda
        
        cout<<"What is your goal diet weight in lbs?"<<endl;
        cin>>fwtpson;
        wtg=454*fwtpson; //convert lbs to g
        
        swtnrps=swtsoda*wtsoda; //.001*350=.35
        a=nkill*wtg; // calculate 1/7th final weight
        ncans=a*swtnrps; // calculate # of cans to drink til death      
        
        
        cout<<"If you weigh "<<fwtpson<<" lbs,"<<endl;
        cout<<"then you can only have "<<fixed<<setprecision(0)<<a<<" grams of sweetener which is"<<endl;
        cout<<fixed<<setprecision(0)<<ncans<<" cans of soda.\n"<<"To repeat type y"<<endl;
        cin>>ans;           
    }while(ans=='y'||ans=='Y');
    
    
    
    
    
    

    return 0;
}
