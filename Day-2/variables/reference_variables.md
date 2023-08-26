# ⚡Reference variables in c++

> Reference variable stores the address of another variable.
> example:

```c++
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;

    return 0;
}
```