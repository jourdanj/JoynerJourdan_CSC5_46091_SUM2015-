/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 5, 2015, 4:31 PM
 * Purpose: Savitch 9th Ed Ch 2 # 6
 */

#include <iostream>
#include <iomanip>// file i/o
using namespace std;

//User functions

//Global constants

//Function prototypes

//Execution begins 
int main(int argc, char** argv) {

    //declare variables
    char ans;
    float   pay=16.78f,
            tot,
            gross,
            ot=pay*1.5f,
            sstax=0.06f,
            fitax=0.14f,
            sitax=0.05f,
            udues=10.0f,
            hplus=35.0f,
            hours,
            depeds;
    do{
        //read in values
        cout<<"Enter number of hours worked.\n";
        cin>>hours;
        cout<<"Enter number of dependents.\n";
        cin>>depeds;
        //output for 4 situations
        if(hours<=40 && depeds<3){
            tot=(pay*hours);
            gross=tot-(tot*sstax)-(tot*fitax)-(tot*sitax)-udues;
            cout<<"Total Earnings: $"<<fixed<<setprecision(2)<<tot<<endl;
            cout<<"Social Security Tax: -$"<<tot*sstax<<endl;
            cout<<"Federal Income Tax: -$"<<tot*fitax<<endl;
            cout<<"State Income Tax: -$"<<tot*sitax<<endl;
            cout<<"Union Dues: -$"<<udues<<endl;
            cout<<"Gross Pay: $"<<gross<<endl;
            cout<<"Repeat calculations? press y/n\n";
        }
        else if(hours<=40 && depeds>=3){
            tot=(pay*hours);
            gross=tot-(tot*sstax)-(tot*fitax)-(tot*sitax)-udues-hplus;
            cout<<"Total Earnings: $"<<fixed<<setprecision(2)<<tot<<endl;
            cout<<"Social Security Tax: -$"<<tot*sstax<<endl;
            cout<<"Federal Income Tax: -$"<<tot*fitax<<endl;
            cout<<"State Income Tax: -$"<<tot*sitax<<endl;
            cout<<"Union Dues: -$"<<udues<<endl;
            cout<<"Additional Insurances charges: -$"<<hplus<<endl;
            cout<<"Gross Pay: $"<<gross<<endl;
            cout<<"Repeat calculations? press y/n\n";    
        }
        else if(hours>40 && depeds<3){
            tot=(pay*hours)+((hours-40.0f)*ot);
            gross=tot-(tot*sstax)-(tot*fitax)-(tot*sitax)-udues;
            cout<<"Total Earnings: $"<<fixed<<setprecision(2)<<tot<<endl;
            cout<<"Social Security Tax: -$"<<tot*sstax<<endl;
            cout<<"Federal Income Tax: -$"<<tot*fitax<<endl;
            cout<<"State Income Tax: -$"<<tot*sitax<<endl;
            cout<<"Union Dues: -$"<<udues<<endl;
            cout<<"Gross Pay: $"<<gross<<endl;
            cout<<"Repeat calculations? press y/n\n";
        }
        else if(hours>40 && depeds>=3){
            tot=(pay*hours)+((hours-40.0f)*ot);
            gross=tot-(tot*sstax)-(tot*fitax)-(tot*sitax)-udues-hplus;
            cout<<"Total Earnings: $"<<fixed<<setprecision(2)<<tot<<endl;
            cout<<"Social Security Tax: -$"<<tot*sstax<<endl;
            cout<<"Federal Income Tax: -$"<<tot*fitax<<endl;
            cout<<"State Income Tax: -$"<<tot*sitax<<endl;
            cout<<"Union Dues: -$"<<udues<<endl;
            cout<<"Additional Insurances charges: -$"<<hplus<<endl;
            cout<<"Gross Pay: $"<<gross<<endl;
            cout<<"Repeat calculations? press y/n\n";     
        }
         cin>>ans;   
    }while(ans=='y'||ans=='Y');
    //exit
    
    return 0;
}

