// CREATE A PROGRAM TO TAKE INPUT OF TWO NUMBERS AND OPERATE THEM
// BETWEEN ARTHMETIC OPERATIONS LIKE ADDITION,SUBTRACTION,
// MULTIPLICATIONS , DIVISION 

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int choice,a,b,result;
    cout<<"***** SIMPLE CALCULATOR *****\n"<<endl;
    cout<<"ENTER 1 FOR ADDITION"<<endl;
    cout<<"ENTER 2 FOR SUBTRACTION"<<endl;
    cout<<"ENTER 3 FOR MULTILICATION"<<endl;
    cout<<"ENTER 4 FOR DIVISION\n"<<endl;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice;
    
    cout<<"\nENTER YOUR FIRST NUMBER :";
    cin>>a;
    cout<<"\nENTER YOUR SECOND NUMBER :";
    cin>>b;
    
    switch(choice){
        case 1:
            result = a + b;
            cout<<a<<" + "<<b<<" = "<<result<<endl;
            break;
        case 2:
            result = a - b;
            cout<<a<<" - "<<b<<" = "<<result<<endl;
            break;
        case 3:
            result = a * b;
            cout<<a<<" * "<<b<<" = "<<result<<endl;
            break;
        case 4:
            if(b!=0){
                result = a / b;
                cout<<a<<" / "<<b<<" = "<<result<<endl;
            }
            else{
                cout<<"ERROR"<<endl;
            }
            break;
        default :
            cout<<"INVALID CHOICE PLEASE TRY AGAIN;";
            break;
    }
    return 0;
}