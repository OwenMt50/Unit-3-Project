//Created By Owen Martin
//Date: 4/20/25
//Description: Emulation of NIM in C++

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int sticks = 16;
    int remove = 0;
    int turn = 0;
    int computer = rand() % 3;
    string name = "";
    
    cout<<"Please input a creative username\n";
    cin>>name;

    cout<<"Welcome, "<<name<<", to an emulation of NIM!\n";
    cout<<"Insert instructions here for final draft.\n";

    while (sticks > 0){
        cout<<"Please remove a number of sticks from 1 to 3.\n";
        cin>>remove;
        sticks = sticks - remove;
        sticks = sticks - computer;
        cout<<"There are now "<<sticks<<" sticks left. \n";
    }

    if (sticks < 0){
        cout<<"Congratulations, "<<name<<", you have bested the Computer!\n";
    }else{ if(sticks = 0);
        cout<<"Computer opponent has won the round.\n";
    }
}
