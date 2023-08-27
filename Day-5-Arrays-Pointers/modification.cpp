#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int loc, elem;
    cout<<"Enter the location to modify adn element to modify with: ";
    cin>>loc>>elem;

    arr[loc]=elem;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
    getch();
}