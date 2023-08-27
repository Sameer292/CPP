#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[5];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tmp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    int elem;
    cout << "Enter the element to search: ";
    cin >> elem;
    int beg = 0, end = n-1, mid;
    int flag = 0;
    int loc;

    
    while(beg<=end && flag==0)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == elem)
        {
            flag = 1;
            loc = mid;
            break;
        }
        else if(elem<arr[mid])
        {
            end = mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(flag == 1)
    {
        cout<<"Element found!!!"<<"\n";
        cout<<"Location: "<<loc<<"\n";
    }
    else{
        cout<<"Element not found!!!";
    }
    return 0;
    getch();

}