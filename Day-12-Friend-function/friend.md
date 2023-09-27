# ⚡Friend
> Friend function is a very useful tool in c++

> Generally we cannot access the private data members of a class from outside. But here is where "friend" function comes in.

> It allows any function to access even the private data of a class

> Example:

```c++
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
```

> In this program we are able to access the private data of the complex1 class from the addComples function.

> It's because we have declared addComples function as a friend inside the class..

> It's like giving permission to use the private data.

- It must be declared before hand in the class.
- Not in the scope of class
- can be declared privately or publicly
