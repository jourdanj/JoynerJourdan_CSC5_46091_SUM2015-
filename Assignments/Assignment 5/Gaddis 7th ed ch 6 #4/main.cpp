/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 9:41 PM
 * Purpose: GAddis 7th ed ch 6 #4
 */

#include <iostream>
#include <string>//io libraries
using namespace std;

//user files

//global constants

//function prototypes
int getNumAccidents(string);
void findLowest(int,int,int,int,int,string,string,string,string,string);
//execute
int main(int argc, char** argv) {
    
    string  n="North",
            s="South",
            e="East",
            w="West",
            c="Central";
    int n1=getNumAccidents(n);
    int s1=getNumAccidents(s);
    int e1=getNumAccidents(e);
    int w1=getNumAccidents(w);
    int c1=getNumAccidents(c);
           

    findLowest(n1,s1,e1,w1,c1,n,s,e,w,c);
    return 0;
}
int getNumAccidents(string a){
    int z;
        cout<<"Enter # of accidents in the "<<a<<" District.\n";
        do{
            cin>>z;
        }while(z<0);
    
    return z;
}
void findLowest(int a,int b,int c,int d,int e,string q,string w,string r,string t, string y){
    
    int low=1000000;
    string h;
    
    if(low>a){
        low=a;
        h=q;
    }
    if(low>b){
        low=b;
        h=w;
    }
    if(low>c){
        low=c;
        h=r;
    }
    if(low>d){
        low=d;
        h=t;
    }
    if(low>e){
        low=e;
        h=y;
    }
    
    cout<<"The "<<h<<" District had the fewest accidents with "<<low<<endl;
}

