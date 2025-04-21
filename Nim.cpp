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
    int computer = rand() % 3; //random number generator between 1 and 3
    string name = "";
    
    cout<<"Please input a creative username\n"; //user created username
    cin>>name;

    cout<<"Welcome, "<<name<<", to an emulation of NIM!\n";
    cout<<"Insert instructions here for final draft.\n"; //final draft will have proper instructions for NIM

    while (sticks > 0){ //while statement if sticks more than 0 then loop keeps going
        cout<<"Please remove a number of sticks from 1 to 3.\n";
        cin>>remove; //player chosen stick remove amount
        sticks = sticks - remove; //equation for player stick removal
        sticks = sticks - computer; //takes player removal and takes computer's random removal amount
        cout<<"There are now "<<sticks<<" sticks left. \n";
    }

    if (sticks < 0){ //if computer takes more than 0 and goes negative, player wins
        cout<<"Congratulations, "<<name<<", you have bested the Computer!\n";
    }else{ if(sticks = 0); //if computer meets 0 then player loses
        cout<<"Computer opponent has won the round.\n";
    }
}
