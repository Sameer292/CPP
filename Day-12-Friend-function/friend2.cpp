#include<iostream>
using namespace std;
class complex2;
class complex1{
    int i,j;
    friend void addCom(complex1 ob1, complex2 ob2);
};
class complex2{
    int i,j;
    friend void addCom(complex1 ob1, complex2 ob2);
};
void addCom(complex1 ob1, complex2 ob2)
{
    int m,n;
    cout<<"Enter the real and imaginary part for 1st complex number: ";
    cin>>ob1.i>>ob1.j;
    cout<<"Enter the real and imaginary part for 2nd complex number: ";
    cin>>ob2.i>>ob2.j;
    m=ob1.i+ob2.i;
    n=ob1.j+ob2.j;
    cout<<"The sum is: "<<m<<" + "<<n<<"i";
}    
int main()
{
    complex1 a;
    complex2 b;
    addCom(a,b);
    return 0;
}