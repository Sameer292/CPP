# ⚡Return is used to return a value from a function.
> if a function has a return type then it is required to return a certain value.. This task is done using the return statement.

> example:
```c++
#include<iostream>
int sum(int,int);
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENter the value of a & b:";
    cin>>a>>b;
    c=sum(a,b);
    cout<<"sum: "<<c<<endl;
}
int sum(int a,int b)
{
    return a+b;     //This returns tha designated value from the function to where the function is called. 
}
```

## ⚡NOTE: we cannot have a return value if the function doesn't have a return type
