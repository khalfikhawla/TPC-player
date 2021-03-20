#include "player.h"
#include <iostream>
#include <string>
#include <regex>

int main(){

    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*WELCOME-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
    player p1;
    player p2;
    while(p1.getName()=="Unknown" || p2.getName()=="Unknown"){
        if(p1.getName()=="Unknown"){
            string name;
            cout<<"Hey Player1, please enter your name"<<endl;
            getline(cin,name);
            if(name!=""&&name!=" "){
                p1.setName(name);
            }

        }
        else{
            string name;
            cout<<"Hey Player2, please enter your name"<<endl;
            getline(cin,name);
            if(name!=""&&name!=" "){
                p2.setName(name);
            }

        }
    }
    cout<<"Great! Hi "<<p1.getName()<<" and "<<p2.getName()<<endl;

    for (int i = 0; i < 6; ++i) {
        if(i%2==0){
            p1.chooseAction();
        }
        else{
            p2.chooseAction();
        }
    }
    return 0;
}