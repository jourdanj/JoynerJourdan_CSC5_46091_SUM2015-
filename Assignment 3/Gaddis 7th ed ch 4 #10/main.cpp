/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 5:00 PM
 * Purpose: Gaddis 7th ed ch 4 #10
 */

#include <iostream>
#include<iomanip>//file i/o
using namespace std;

//user functions 

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {

    int units;
    float price;
    
    cout<<"INPUT # OF UNITS SOLD.\n";
    cin>>units;
    
    if(units<=0){
        cout<<"INVALID INPUT\n";
    }
    else if(units>0 && units<=9){
        price=(units*99);
        cout<<"PRICE IS $"<<fixed<<setprecision(2)<<price;
    }
    else if(units>=10 && units<=19){
        price=(units*99)-(units*99*0.2f);
        cout<<"PRICE IS $"<<fixed<<setprecision(2)<<price<<endl;
    }
    else if(units>=20 && units<=49){
        price=(units*99)-(units*99*0.3f);
        cout<<"PRICE IS $"<<fixed<<setprecision(2)<<price<<endl;
    }
    else if(units>=50 && units<=99){
        price=(units*99)-(units*99*0.4f);
        cout<<"PRICE IS $"<<fixed<<setprecision(2)<<price<<endl;
    }
    else if(units>=100){
        price=(units*99)-(units*99*0.5f);
        cout<<"PRICE IS $"<<fixed<<setprecision(2)<<price<<endl;
    }
    return 0;
}

