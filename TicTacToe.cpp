// BUILD A SIMPLE CONSOLE BASED TIC TAC TOE GAME THAT ALLOWS TWO
// PLAYERS TO PLAY AGAINST EACH OTHER

#include<iostream>
#include<conio.h>
using namespace std;
int n=-1,b;
void board();
void checkToWin();
char a[10] = {'0','1','2','3','4','5','6','7','8','9'};
int main(){
    char symbol;
    char player1[10] , player2[10];
    int playagain,i=0;
    cout<<"ENTER FIRST PLAYER NAME :";
    cin>>player1;
    cout<<"ENTER SECOND PLAYER NAME :";
    cin>>player2;
    cout<<"\n\n";
    cout<<"****** WELCOME TO TIC TAC TOE ******\n\n";
    while(i==0){
    while(n==-1){
        board();
        int player = (player%2==0)  ?   2   :   1   ;
        symbol = (player%2==0)  ?   'O' :   'X';
        cout<<symbol<<"  PLAY YOUR MOVE TO ENTER {1 - 9} : ";
        cin>>b;
        if(b<1 ||  b>9){
            cout<<"SORRY ! INVALID INPUT...";
            break;
        }
        a[b]=symbol;
        player++;
        checkToWin();
    }
    if(symbol=='X'){
        cout<<player1<<"IS WINNER \n";
    }
    else{
        cout<<player2<<"IS WINNER \n";
    }
    cout<<"IF YOU WANT TO PLAY THEN ENTER 1 OR EXIT ENTER ANYTHING :";
    cin>>playagain;
    if(playagain==1){
        i=0;
    }
    else{
        cout<<"THANKYOU FOR PLAYING THESE GAME";
        break;
    }
}
    return 0;
}
void board(){
    cout<<"      |      |      \n";
    cout<<" "<<a[1]<<"    |   "<<a[2]<<"  |   "<<a[3]<<"   \n";
    cout<<"______|______|______\n";
    cout<<"      |      |      \n";
    cout<<" "<<a[4]<<"    |   "<<a[5]<<"  |   "<<a[6]<<"   \n";
    cout<<"______|______|______\n";
    cout<<"      |      |      \n";
    cout<<" "<<a[7]<<"    |   "<<a[8]<<"  |   "<<a[9]<<"   \n";
    cout<<"      |      |      \n";
}
void checkToWin(){
    if(a[1]==a[2]   &&  a[2]==a[3]){        //FOR ROWS
        n++;
        return;
    }
    if(a[4]==a[5]   &&  a[5]==a[6]){
        n++;
        return;
    }
    if(a[7]==a[8]   &&  a[8]==a[9]){
        n++;
        return;
    }if(a[1]==a[4]   &&  a[4]==a[7]){       // FOR COLUMNS
        n++;
        return;
    }
    if(a[2]==a[5]   &&  a[5]==a[8]){
        n++;
        return;
    }
    if(a[3]==a[6]   &&  a[6]==a[9]){
        n++;
        return;
    }
    if(a[1]==a[5]   &&  a[5]==a[9]){        // FOR CROSS LINE
        n++;
        return;
    }
    if(a[3]==a[5]   &&  a[5]==a[9]){
        n++;
        return;
    }
}
