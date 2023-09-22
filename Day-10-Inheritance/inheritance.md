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

### Now we can use the player whereever we can use the entity because player contains every property of the entity and more.
> Having more is not necessary though... They both can have exactly the same properties as well.

## There are different types of inheritance:
- Single inheritance
- Multiple inheritance
- Hierarchial inheritance
- Multilevel inheritance
- Hybrid Inheritance

# ⚡Single inheritance
> A derived class with only one base class is called single inheritance.

> Example:
```c++
class person{
    string name;
    int age;
    string address;
}
class student : public person
{
    int roll;
    int _class;
}
```
> This is single inheritance because student class is derived from person class only i.e. only one base class.

# ⚡Multiple inheritance

> A derived class with more than one base class is called multiple inheritance.

> Example:
```c++
class person
{
    string name;
    int age;
}
class place 
{
    string country;
    string districe
    int ward_no;
}
class student : public person , public place;
{
    int _class;
    int roll_no;
    char section;
}
```
> The student class has more than one base classes i.e. person and student.
> When a class has more than one base classes it is called multiple inheritance.

# ⚡Hierarchial inheritance

> A base class having more than one class derived from it is called hierarchial inheritance.

> Example:

```c++
class person
{
    string name;
    int age;
}
class student : public person 
{
    int roll;
    int _class;
}
class teacher : public person
{
    string subject;
    double salary;
}
```

> This is hierarchical inheritance because person is a base class and student and teacher class are derived from it.
> Since it has more than one derived class it's called hierarchial inheritance.

# ⚡Multilevel inheritance

> When a class is herived from already a derived class then it is called multilevel inheritance.

> Example:
```c++

class address{
    string country;
    string state;
    string district;
    int ward_no;
}
class person : public address
{
    string name;
    int age;
}
class student : public person
{
    int _class;
    int roll;
    string section;
}
```

> Here, the class student is derived from class person which already is derived from the class address.

> This is called multi-level inheritance becaus there are levels of base and derived classes in this type of inheritance.


# ⚡Hybrid Inheritance

> This is the mixture of multiple and multilevel inheritance

> Example:

```c++
class animal{

}
class mammal : public animal
{

}
class cow : public mammal
{

}
class birds : public animal
{

}
class hen : public animal , public birds
{

}
```

> This is hybrid inheritance