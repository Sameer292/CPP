#include<iostream>
using namespace std;
int main()
{
    int var=8;
    int *ptr= &var;
    cout<<"var: "<<var<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"ptr: "<<ptr<<endl;

    return 0;
}
