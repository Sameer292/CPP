> It is the multiple use of a constructor. varying according to the taken arguments

```c++
#include<iostream>
using namespace std;
class fun{
    int x,y;
    public:
    fun()
    {
        x=0;y=0;
    }
    fun(int a)
    {
        x=a;
        y=0;
    }
    fun (int a, int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }

};
int main()
{
 fun i;
 fun j(5);
 fun k(5,6);
 i.print();
 j.print();
 k.print();
 return 0;
}
```

> Here, we are creating multiple constructors and taking different arguments.. And when we create an object It goes to the constructor with the corresponding arguments.