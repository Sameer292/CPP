#include<iostream>
using namespace std;
class complex1
{
    int i,j;
    friend void addComples(complex1 o1, complex1 o2);

};
void addComples(complex1 o1, complex1 o2)
{
    int m,n;
    cout<<"Enter the real and imaginary part of a complex number: "<<endl;
    cin>>o1.i>>o1.j;
    cout<<"Enter the real and imaginary part of a complex number: "<<endl;
    cin>>o2.i>>o2.j;
    m=o1.i+o2.i;
    n=o1.j+o2.j;

    cout<<"Their sum is: ";
    cout<<m<<" + "<<n<<"i"<<endl;
}
int main()
{
    complex1 a,b;
    addComples(a,b);
    return 0;
}