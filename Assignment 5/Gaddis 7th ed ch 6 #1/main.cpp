/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 4:04 PM
 * Purpose: Gaddis 7th ed ch 6 #1
 */

#include <iostream>
#include <iomanip>//library
using namespace std;//file i/o

//user files

//global constants

//function prototypes
void saleprice(float,float);
//execute
int main(int argc, char** argv) {
    
    float   price,
            markup;
    
    cout<<"Enter cost of item\n";
    cin>>price;
    cout<<"Enter markup percentage\n";
    cin>>markup;
    if(price<=0||markup<=0){
    
        cout<<"INVALID ENTRY, ENTER POSITIVE VALUES\n";
        return 1;
    }
    else{
        
        saleprice(price,markup);
    }
    return 0;
}
void saleprice(float price,float markup){
    float tot=price*((markup/100)+1);
    cout<<"Total sales price is $"<<fixed<<setprecision(2)<<tot<<endl;
}
