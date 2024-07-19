// CREATE A PROGRAM THAT THAT GENERATES A RANDOM NUMBER AND ASKS 
// THE USER TO GAUSS IT. PROVIDE FEEDBACK ON WHEATHER THE GAUSS IS
// TOO HIGH OR TOO LOW UNTILL THE USER GUESSES THE CORRECT NUMBER

#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    int secno = (rand()%100)+1;

    cout<<"***** WELCOME IN THE NUMBER GAUSSING GAME *****\n"<<endl;
    cout<<"I AM THINKING A NUMBER BETWEEN 0 TO 100 TRY TO GAUSS IT"<<endl; 
    
    int gauss;
    while(true){
        cout<<"ENTER YOUR GAUSS : ";
        cin>>gauss;
        if(gauss==secno){
            cout<<"CONGRATULATIONS! "<<secno<<" YOU GAUSS NUMBER IS CORRECT \n";
            break;
        }
        else if(gauss>secno){
            cout<<"YOUR GAUSS IS TOO HIGH ! TRY AGAIN\n";
        }
        else{
            cout<<"YOUR GAUSS IS TOO LOW ! TRY AGAIN\n";
        }
    }
    return 0;
}