#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int loc;
    cout << "Enter the location to delete";
    cin >> loc;
    for(int i = loc; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i = 0; i < n-1; i++)
    cout << arr[i] << "\n";
getch();
}