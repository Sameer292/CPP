#include<iostream>
using namespace std;
class commp;
class complex{
    int a,b;
    friend void addcomp(complex o, commp p );
};
class commp{
int c,d;
friend void addcomp(complex o, commp p);
};
void addcomp(complex o, commp p)
{
    int i,j;
    cout<<"Enter the first complex number: ";
    cin>>o.a>>o.b;
    cout<<"Enter the second complex number: ";
    cin>>p.c>>p.d;
    i=o.a+p.c;
    j=o.b+p.d;
    cout<<"Sum: "<<i<<" + "<<j<<"i";
}
int main()
{
    complex o1;
    commp o2;
    addcomp(o1,o2);
}