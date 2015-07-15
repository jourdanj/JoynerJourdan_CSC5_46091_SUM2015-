/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 1:24 PM
 * Purpose: Gaddis 7th Ed ch 5 #10
 */

#include <iostream>
using namespace std;

//user function

//global constants

//function prototype

//execution begins
int main(int argc, char** argv) {

    int     year,
            months=12,
            i=1,
            j=1,
            rain,
            totmont,
            raintot;
    cout<<"ENTER # OF YEARS\n";
    cin>>year;
    
    if(year<1){
        cout<<"invalid response.\n";
    }
    else{
        for(i;i<=year;i++){
            for(j;j<=months;j++){
                cout<<"Input rainfall in inches for year "<<i<<" month "<<j<<endl;
                cin>>rain;
                if(rain<0){
                    cout<<"invalid response.\n";
                    break;
                }
                else{
                    raintot+=rain;
                }    
            }
            totmont+=months;
        
             j=1;
        }
    }
    cout<<"TOTAL MONTHS: "<<totmont<<endl;
    cout<<"TOTAL RAINFALL: "<<raintot<<" inches.\n";
    return 0;
}

