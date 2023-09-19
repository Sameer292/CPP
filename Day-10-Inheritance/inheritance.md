# ⚡Inheritance

> It allows us to have a heirarchy of class which can relate to each other

> It allows us to have a base class that contains common functionality and then allows us to create sub-classes from it.

> The sub classes may have the same functionality or can slightly differ from the parent class or have entirely different functionality.

> It is very useful because it helps us to avoid code duplication.

> Instead of repeating the same code again and again we can simply use inheritance and pull up all the common functionality and create a parent class and create sub-classes off it which either change the functionality in subtle ways or have entirely new functionality.

> Example:
```c++
#include<iostream>
class entity
{
    public:
    float x,y;
    entity()
    {
        x=0;
        y=0;
    }
    entity(float a, float b)
    {
        x=a;
        y=b;
    }
    void move(float xa, float ya)
    {
        x+=xa;
        y+=ya;
    }
    void showPost()
    {
        std::cout<<x<<","<<y<<std::endl;
    }
};
class Player : public entity
{
    public: 
    void hello()
    {
        std::cout<<"Hello"<<std::endl;
    }
};
int main()
{
    Player a1;
    a1.move(5,5);
    a1.hello();
    a1.showPost();
}
```

> Here we have two classes entity and player.. 

> Entity is the base class and player is the sub class of entity.

> player now has the properties of the base class that is entity.

> base class is accessed as following::

```c++
class Player : public entity //used to access the base class
{
    public: 
    void hello()
    {
        std::cout<<"Hello"<<std::endl;
    }
};
```
### The expected output of the above program is
```c++
Hello
5,5
```
```c++
int main()
{
    Player a1;
    a1.move(5,5);
    a1.hello();
    a1.showPost();
}
```
> Here we have created a player object a1.

> Since player is a sub-class of entity the obj a1 also has properties of entity class. i.e it can access the float variables, the move method and the showPost method as well.

> So we did use the a1 obj and used inheritance property to use move hello and showPost function that is in entity class.