#include<iostream>
int sum(int,int);
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a & b:";
    cin>>a>>b;
    c=sum(a,b);
    cout<<"sum: "<<c<<endl;
}
int sum(int a,int b)
{
    return a+b;     //This returns tha designated value from the function to where the function is called. 
}