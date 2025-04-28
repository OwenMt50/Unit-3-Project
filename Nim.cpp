//Created By Owen Martin
//Date: 4/20/25
//Description: Emulation of NIM in C++

#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){

    int sticks = 16; //set amount of sticks
    int remove = 0; //integer allows removal of sticks for both player and random number generator
    srand(time(0)); //allows a random number to be generated PER turn 
    string name = ""; 
    
    cout<<"Please input a creative username\n"; //user created username
    cin>>name; 

    cout<<"Welcome, "<<name<<", to an emulation of NIM!\n"; //First spot where username is displayed
    cout<<"*INSTRUCTIONS*\n"; //Start of instructions for user, will not repeat again after first turn
    cout<<"To win you must force the computer to take more sticks than what is displayed during your last turn.\n";
    cout<<"You will be asked to remove 1 to 3 sticks during each turn.\n";
    cout<<"If the computer reaches zero, you lose and it wins.\n";
    cout<<"*BEGIN*\n"; //end of instructions, start of game

    while (sticks > 0){ //while statement if sticks more than 0 then loop keeps going *start of while loop*
        cout<<"Please remove a number of sticks from 1 to 3.\n";
        cin>>remove; //player chosen stick remove amount
        sticks = sticks - remove; //equation for player stick removal
        int computer = rand() % 3+1; //random number generator between 1 and 3
        sticks = sticks - computer; //takes player removal and takes computer's random removal amount
        cout<<"Computer has taken "<<computer<<".\n";
        cout<<"There are now "<<sticks<<" sticks left. \n";
    }

    if (sticks >= 0){ //if sticks are more than or equal to 0 for computer, player loses
        cout<<"Computer opponent has won the round.\n";
 
    }else{ 
        cout<<"Congratulations, "<<name<<", you have bested the Computer!\n"; //any other value for sticks that is less than 0, computer loses and player wins

    } //*end of while loop*

}
