# ⚡Copy Constructor

> Copy constructor creates an exact copy af an another object...

```c++
#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){a=0;}
    number(number &obb)
    {
        a=obb.a;
    }
    number(int num)
    {
        a=num;
    }
    void show()
    {
        cout<<"Number is: "<<a<<endl;
    }
};
int main()
{
 number n1,n2,n3(50);
 number n4(n3);
 n3.show();
 n4.show();
 return 0;
}
```

```c++
 number(number &obb)
 ```

> Here, this is the copy constructor that we made... This creates an exact copy of the object passed to it of the class number.

```c++
 number n4(n3);
 ```

 > After passing the object n3 to n4... The copy constructor is called and it is executed.


- The compiler provides an default copy constructor..

```c++
#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){a=0;}
    
    number(int num)
    {
        a=num;
    }
    void show()
    {
        cout<<"Number is: "<<a<<endl;
    }
};
int main()
{
 number n1,n2,n3(50);
 number n4(n3);
 n3.show();
 n4.show();
 return 0;
}
```

> Even this works just fine.. Even though we have not defined any copy constructor it still provides the same output.

> Here the default copy constructor provided by the compiler works.