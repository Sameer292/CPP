//Enum is used to assign numerical values to a name

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
enum person{
    sameer,
    aryan,
    bishal,
    ashish,
    empty
};
int main()
{
    enum person manchhe;
    string choose;
    cout<<"Enter a person's name: "<<endl;
    cin>>choose;
    if(choose=="sameer")
    manchhe=sameer;
    else if(choose=="aryan")
    manchhe=aryan;
    else if(choose=="bishal")
    manchhe=bishal;
    else if(choose=="ashish")
    manchhe=ashish;
    else
    manchhe=empty;

    switch(manchhe)
    {
        case aryan:
        cout<<"You are aryan."<<endl;
        break;

        case sameer:
        cout<<"You are sameer."<<endl;
        break;
        
        case bishal:
        cout<<"You are bishal."<<endl;
        break;

        case ashish:
        cout<<"You are ashish."<<endl;
        break;

        default:
        cout<<"ERROR!!!"<<endl;
        
    }

getch();
    return 0;

}