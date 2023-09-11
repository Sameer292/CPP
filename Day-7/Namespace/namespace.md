# Namespaces

> When we have functions with similar names in c++ and they take the same arguments but have different definations or have different bodies.
> We would have two identical symbols but we connot have that. That's an linking error

> example

```c++
#include<iostream>
void nums(int a, int b)
{
    std::cout << a+b <<endl;
}

void nums(int a, int b)
{
    std::cout << a-b << std::endl;
}

int main()
{
    nums(1,2);
    nums(1,2):
}
```

> In this case it'd show an error because we have two functions with the same names. We cannot have that.

> But what if we need to have two functions with the same names?

> That's where namespaces come in. Namespaces are used to avoid the naming conflicts.

> Namespace allows us to use the same name in different context.

> Namespaces allow us to have two functions with the same name and same definations too.

```c++
#include<iostream>
namespace add
{


void nums(int a, int b)
{
    std::cout << a+b <<endl;
}
}

namespace sub
{
void nums(int a, int b)
{
    std::cout << a-b << std::endl;
}
}


int main()
{
    add::nums(1,2);
    sub::nums(1,2);
}
```
> Now we have created namespaces add and sub. and "::" is used to access the namespaces.

> We can also give aliases to namespaces:
```c++
int main()
namespace a=add;
a::nums(1,2);
```
> This is perfectly valid.

>## ⚡We can also nest namespaces:

```c++
#include<iostream>
namespace add
{

namespace fun{

void nums(int a, int b)
{
    std::cout << a+b <<endl;
}

}

}

namespace sub
{
void nums(int a, int b)
{
    std::cout << a-b << std::endl;
}
}


int main()
{
    add::fun::nums(1,2);
    sub::nums(1,2);
}
```
>## ⚡Or we can just do:

```c++
int main()
{
    add::fun::nums(1,2);
}
```
>## ⚡Or,

```c++
int main()
{
    using namespace add::fun;
    nums(1,2);
}
```

>## ⚡Or,

```c++
int main()
{
    using namespace add;
    using namespace fun;

    nums(1,2);
}
```