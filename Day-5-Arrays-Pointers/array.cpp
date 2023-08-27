#include<iostream>
using namespace std;
int main()
{
    int a[50];
    int sum=0;
    cout<<"Enter a number: ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"sum is: "<<sum<<endl;
}