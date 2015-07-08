/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 6:40 PM
 * Purpose: Gaddis 7th ed ch 4 #21
 */
#include <iostream>//file io
using namespace std;

//user functions

//global constants

//function prototypes

//execution
int main(int argc, char** argv) {

    int     rad,
            l,
            w,
            h,
            b,
            x;
    float   area,
            pi=3.14159f;
    
    cout<<"Calculate the Area of a Circle - Press 1\n";
    cout<<"Calculate the Area of a Rectangle - Press 2\n";
    cout<<"Calculate the Area of a Triangle - Press 3\n";
    cout<<"Quit - Press 4\n";
    cin>>x;
    switch(x){
        case 1:
            cout<<"Enter radius of circle\n";
            cin>>rad;
            if(rad>0){
                area=pi*rad*rad;
            
                cout<<"Area of Circle = "<<area<<endl;
            }
            else
                cout<<"Invalid value for radius\n";
        break;
        
        case 2:
            cout<<"Enter length of rectangle\n";
            cin>>l;
            cout<<"Enter width of rectangle\n";
            cin>>w;
            
            if(l>0 && w>0){
            
            area=l*w;
            
            cout<<"Area of Rectangle = "<<area<<endl;
            }
            else
                cout<<"Invalid value for length or width\n";
        break;
        
        case 3:
            cout<<"Enter base of triangle\n";
            cin>>b;
            cout<<"Enter height of triangle\n";
            cin>>h;
            
            if(b>0 && h>0){
            area=b*h*0.5f;
            
            cout<<"Area of Triangle = "<<area<<endl;
            }
            else
                cout<<"Invalid value for base or height\n";
        break;
        
        case 4:
        
        break;
        
        default:
            cout<<"Invalid Input\n";
                    
            
    }
    
    return 0;
}

