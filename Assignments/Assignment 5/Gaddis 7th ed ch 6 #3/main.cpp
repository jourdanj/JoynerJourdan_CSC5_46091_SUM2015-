/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 4:23 PM
 * Purpose: Gaddis 7th ed ch 6 #3
 */

#include <iostream>//libraries
using namespace std;

//user files

//global constants

//function prototypes
float getSales(string);
void findHighest(float,float,float,float,string,string,string,string);
//execution begins
int main(int argc, char** argv) {
    string  div1,//names
            div2,
            div3,
            div4;
    float   div11,//sales
            div22,
            div33,
            div44;
    cout<<" Input Division 1 name\n";
    cin>>div1;
    div11=getSales(div1);
    cout<<" Input Division 2 name\n";
    cin>>div2;
    div22=getSales(div2);
    cout<<" Input Division 3 name\n";
    cin>>div3;
    div33=getSales(div3);
    cout<<" Input Division 4 name\n";
    cin>>div4;
    div44=getSales(div4);

    findHighest(div11,div22,div33,div44,div1,div2,div3,div4);
    return 0;
}
//***************************************************************//
//Inputs sales numbers for a division.
//**************************************************************//
float getSales(string){
    
    float sales;
    
    cout<<"Enter quarterly sales figure\n";
    cin>>sales;
    if(sales<=0){
        cout<<"Invalid response\n";
        return 1;
    }
return sales;
}
//**********************************************************//
//Determines and outputs highest selling division and outputs
//***********************************************************//
void findHighest(float num1,float num2,float num3,float num4,string a,string b,string c, string d){

    float highest=0;
    string winner;
    if(highest<num1){
        highest=num1;
        winner=a;
    }
    if(highest<num2){
        highest=num2;
        winner=b;
    }
    if(highest<num3){
        highest=num3;
        winner=c;
    }
    if(highest<num4){
        highest=num4;
        winner=d;
        
    }
    cout<<"Highest sales is "<<winner<<" with $"<<highest<<endl;
    


}


