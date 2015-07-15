/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 14, 2015, 12:14 PM
 * Purpose: Gaddis 7th ed ch 5 # 9
 */

#include <iostream>
#include <iomanip>//file i/o libraries
using namespace std;

//user functions

//global contstants

//function prototypes

//execution
int main(int argc, char** argv) {

    float     floors,
            rooms,
            roomtot,
            ocupd,
            ocupdt,
            unocupd,
            unoctot,
            i=1;
    float   pcnt;
    
    cout<<"How many floors in the hotel?\n";
    cin>>floors;
    
    if(floors>0){
        for(i==1;i<13;i++){
            
            cout<<"Enter # of rooms on floor "<<i<<".\n";
            cin>>rooms;
            if(rooms<10){
                "invalid # of rooms\n";
                break;
            }
            else{
            roomtot+=rooms;
            
            cout<<"Enter # of occupied rooms on floor "<<i<<".\n";
            cin>>ocupd;
            unocupd=rooms-ocupd;
            unoctot+=unocupd;
            ocupdt+=ocupd;
            }
        }
        while(i==13){
            i++;
            break;
        }
        for(i;i<=floors;i++){
                cout<<"Enter # of rooms on floor "<<i<<".\n";
                cin>>rooms;
                if(rooms<10){
                "invalid # of rooms\n";
                break;
                }
                else{
            
                    roomtot+=rooms;
            
                    cout<<"Enter # of occupied rooms on floor "<<i<<".\n";
                    cin>>ocupd;
                    unocupd=rooms-ocupd;
                    unoctot+=unocupd;
                    ocupdt+=ocupd;   
                }
            }
        }
        else{
        cout<<"invalid # of floors\n";
    } 
        pcnt=ocupdt/roomtot*100;
        cout<<"Total rooms in hotel: "<<roomtot<<endl;
        cout<<"Total rooms occupied: "<<ocupdt<<endl;
        cout<<"Total rooms unoccupied: "<<unoctot<<endl;
        cout<<"Percentage occupied: "<<showpoint<<fixed<<setprecision(2)<<pcnt<<"%\n";
    
    return 0;
}

