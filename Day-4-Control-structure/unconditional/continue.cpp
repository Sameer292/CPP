#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==5) //here when the value of i is 5 then the continue statement is called which then cancles the current iteration and 5 is not printed.
        continue;

        cout<<i<<endl;
    }
    return 0;
}