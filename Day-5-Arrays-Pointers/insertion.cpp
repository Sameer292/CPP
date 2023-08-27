#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int loc,elem;
    cout<<"Enter the location and element you want to add: ";
    cin>>loc>>elem;

    int tmp;
    for(int i=loc;i<n;i++)
    {
        tmp=arr[i];
        arr[i]=elem;
        elem=tmp;
    }
    arr[n]=elem;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    getch();
}