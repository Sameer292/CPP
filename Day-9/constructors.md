# ⚡Constructors


> Constructors are special kind of methods in c++ that executes during every object creation.

> Example:
```c++
#include<iostream>
class test{
    public:
    int x,y;
    void write(void)
    {
        std::cout<<x<<","<<y<<std::endl;
    }
};
int main()
{
  test a1;
  a1.write();  
}
```
> When the write method is called it prints the values of x and y. But since they are not initialized with any value.. Random value is printed.

> Using constructors we can initialise the variables with required values.. We don't need to initialise for each object separately.
### ⚡The constructor should have the same name as the class.


```c++
#include<iostream>
class test{
    public:
    int x,y;
    test()
    {
        x=1;
        y=2;
    }
    void write(void)
    {
        std::cout<<x<<","<<y<<std::endl;
    }
};
int main()
{
  test a1;
  a1.write();   
}
```
> This test() method now is the constructor and we have initialised x and y with values as required.
```c++
test()
    {
        x=1;
        y=2;
    }
   ```
> This is the constructor.

> Now what happens here is that everytime a new object is created the variables x,y will be initialised with 1 and 2 respectively.

> We can also take arguments in the constructors.

```c++
#include<iostream>
class test{
    public:
    int a,b;
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    void write(void)
    {
        std::cout<<a<<","<<b<<std::endl;
    }
};
int main()
{
  test a1(5,6);
  a1.write();   
}
```