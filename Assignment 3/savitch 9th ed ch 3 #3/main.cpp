/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on July 7, 2015, 1:52 PM
 * Purpose: Savitch 9th Ed ch 3 #3
 */

#include <iostream> 
#include <string>//file i/o
using namespace std;

int main(int argc, char** argv) {

    int     year, //year input
            i,    
            piece; //pt of year worked with
    string roman; //roman numerals
    char ans;     //repeat?
    do{
        
    cout<<"input year.\n"; //obtain values
    cin>>year;
    
    if(year>=3000||year<=0){
        cout<<"invalid input\n";    //End if invalid input is entered
    }      
    else{
        if(year>=1000){ //convert 1000s to Ms
            piece =year/1000;
            
            for(i=0;i<piece;i++){
                roman+='M';
            }
            year%=1000;//use mod to return remainder for 100s
        }
        if(year>=100){ //converts 100s
            piece=year/100;
            
            if(piece==9){//900=CM
                roman+="CM";
                
            }
            else if(piece>=5){//500=D
                roman+="D";
                
                for(i=0;i<piece-5;i++){// >500 but <900 needs C's
                    roman+="C";
                    
                }
            }
            else if(piece==4){ //400=CD
                roman+="CD";
            }
            else if(piece>=1){//>100 but<400 needs C's
                
                for(i=0;i<piece;i++){
                    roman+="C";
                }
            }
        year%= 100; //mod to return 10s
        }
        if(year>=10){
            piece=year/10;
            if(piece==9){ //90=XC
                roman+="XC";
            }
            else if(piece>=5){ // 50=L
                roman+="L";
                
                for(i=0;i<piece-5;i++){// >50 but <90 needs Xs
                    roman+="X";
                }
            }
            else if(piece==4){ //40=XL
                roman+="XL";
            }
            else if(piece>=1){// >1 but <4 needs Xs
                
                for(i=0;i<piece;i++){//adds Xs per 10
                    roman+="X";
                }
            }
        }
        year%=10; //mod returns 1s
        if(year>=1){
            piece=year;
            
            if(piece==9){//9=IX
                roman+="IX";
            }
            else if(piece>=5){//5=V
                roman+="V";
                
                for(i=0;i<piece-5;i++){// >5 but <9 needs Is
                    roman+='I';
                }
              
            }
            else if(piece ==4){ //4=IV
                roman+="IV";
            }
            else if(piece>=1){// >1 but <4 needs Is
                
                for(i=0;i<piece;i++){
                    roman+='I';
                }
            }
        }
                
        cout<<"Roman Numeral: "<<roman<<endl; //output
        roman="";//clears roman for repetition
        cout<<"repeat? press y/n\n";//repeat?
        cin>>ans;
    }
    }while(ans=='y' || ans=='Y');
    
    return 0;
}

