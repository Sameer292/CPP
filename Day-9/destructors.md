# ⚡Destructors
> As the constructors run when we create an object. The destructors run when we terminate/destroy an object.

> Anytime an object gets destroyed the destructor method gets called.

> destructors are the opposite of constructors. 

> constructors are used to initialise any variables during the creation of an object. destructors are used to uninitialise those variables when the objects are destroyed.

> They help to clean up the used memory.

> Example:
```c++
#include<iostream>
class test{
    public:
    int a,b;
    test()
    {
        a=5;
        b=10;
        std::cout<<"Created test!!!";
    }
    ~test()
    {
        std::cout<<"Destroyed test!!!";
    }
    void write(void)
    {
        std::cout<<a<<","<<b<<std::endl;
    }
};
void funct()
{
    test a1;
    a1.write();
}
int main()
{
    funct(); 
}
```
> here ~test is the destructor method.
```c++
~test()
    {
        std::cout<<"Destroyed test!!!";
    }
```