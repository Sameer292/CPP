//using variables and constants

#include<iostream>
#define grand 1000 //this assigs the value to grand and can not be changed later in the program

using namespace std;
int main()
{
    int a,b,c; // these are variables we can assign them a value here or anywhere in the program and their value can be changed at any time as we want
    a=5;
    a=7;
    b=9;
    c=a+b;
    // We can dynamically change the value of the variables
    // grand=1200 cannot be done.

    cout<<c<<"\n";
}