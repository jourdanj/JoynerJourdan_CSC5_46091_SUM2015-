/* 
 * File:   main.cpp
 * Author: jxj93_000
 *
 * Created on July 7, 2015, 4:33 PM
 */

#include <cstdlib>
#include <iostream>// file/ios
using namespace std;

//user functions

//global constants

//function prototypes

//execution begins
int main(int argc, char** argv) {

    float   num1,
            num2,
            sum,
            ans,
            a;

        srand(time(NULL)); 

        num1= rand()%1000;
        num2= rand()%1000;
        sum = num1+num2;
    
        cout<<"  "<<num1<<endl;
        cout<<" +"<<num2<<endl;
        cout<<"______\n";
        cin>>ans;
        if(ans==sum){
            cout<<"correct!\n";
        }
        else{
            cout<<"Incorrect. The correct response is "<<sum<<endl;
        }
      
    return 0;
}

