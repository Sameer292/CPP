#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter a number: ";
    cin>>i;
    if(i%2==0)
    {
        cout<<i<<" is even."<<endl;
    }
    else
    cout<<i<<" is odd."<<endl;

    return 0;
}