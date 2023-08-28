#include<iostream>
using namespace std;
int main()
{
    int a;
    int& refA= a;       //This, now, creates a reference for the avriable a. this reference refA now can be used instead of a.
    cout<<"Enter the value of 'a':";
    cin>>a;

    cout<<"The value of 'a':"<<a<<endl;

    cout<<"The value of 'refA':"<<refA<<endl; //since refA is referencing to the same value as 'a'. It's expected to print the same value as 'a'.
    return 0;
}