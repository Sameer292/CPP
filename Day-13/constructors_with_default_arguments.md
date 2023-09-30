> we can use constructor with default arguments.

> We provide the arguments with a default value. That helps when you  don't send an value for that argument.

```c++
#include<iostream>
using namespace std;
class random{
    int a,b,c;
    public:
    random(){

    }
    random(int x, int y=0, int z=0)
    {
        a=x;
        b=y;
        c=z;
    }
    void print()
    {
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    }
};
int main()
{
 random m(5);
 random n(5,6);
 random o(5,6,7);

m.print();
n.print();
o.print();
 return 0;
}
```

> Here. in the second constructor. We've initialised the value of the arguments y and z to 0.. That means now if we send all three values then the value will be taken.. Else if value only for x is sent then it will be taken and y and z will have the default value that is 0.