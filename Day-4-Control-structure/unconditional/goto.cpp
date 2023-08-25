#include<iostream>
using namespace std;
int main()
{
    int i=0; 
    here: // this is label for the goto statement...
    cout<<i<<endl;
    i++;
    if(i<=10)
    goto here; //this here is the calling of goto statement and the label.

    return 0;
}