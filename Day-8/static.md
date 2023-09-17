# ⚡Static data member
> Static in c++ has different meanings based on the context it's used. Static is used either outside the class / struct or inside the class / struct.

> Whereas, static declared inside a class means it's going to share memory with all of the instances of the class / struct.
> Basically when we declare a static variable inside a class and we make multiple instances (objects) of the same class then all of those instances (objects) will share the same static variable.

> Example:
```c++
#include <iostream>
class student{
    private:
    int roll;
    char name[100];
    static int id;  //Variable defination

    
    public: 
    void indata(){
        std::cout<<"Enter name: "<<std::endl;
        std::cin>>name;
        std::cout<<"Enter roll: "<<std::endl;
        std::cin>>roll;
        id++;
    }
    void outdata()
    {
        std::cout<<"name: "<<name<<std::endl;
        std::cout<<"roll: "<<roll<<std::endl;
        std::cout<<"ID: "<<id<<std::endl;
    }
};
int student:: id;   //variable declaration is outside because it's memory is to be shared with each object created.
// static variable doesn't take new memory for every object rather takes memory once and gets updated 
//Default valus of static variable is 0
int main()
{
    student s1,s2,s3;
    s1.indata();
    s1.outdata();
    s2.indata();
    s2.outdata();
    s3.indata();
    s3.outdata();
    return 0;
}
```

> In this program we are taking input from students and displaying the data.

> we have defined a static variable **'id'** and declared it outside of the class. 

> Now that static variable is shared with every object. 
```c++
void indata(){
        std::cout<<"Enter name: "<<std::endl;
        std::cin>>name;
        std::cout<<"Enter roll: "<<std::endl;
        std::cin>>roll;
        id++;
    }
```
> In this part taking the name and the roll number and increase the id by 1. Since, the id is static it's updated for all the objects now.

> We then print it right after it using this function:
```c++
void outdata()
    {
        std::cout<<"name: "<<name<<std::endl;
        std::cout<<"roll: "<<roll<<std::endl;
        std::cout<<"ID: "<<id<<std::endl;
    }
```
> We print the name roll and the id.

> If we had not made the variable static. Then we would have needed to declare a new variable for each object consuming more memory. We would have needed to initialize it.

> In this same program if the 'id' was not static. Then in the output we'd not have desired output i.e. increasing id number. Because it'd have created a new variable for each object and initialized it random value.
## ⚡Notes
- static variables are the property of the class, not the objects.
- static variables are initialized by default with 0 when objects are created.
- since, they are globally available for each object they should be declared outside the class.
- Only one copy of the variable is created and it is shared among the objects.
- It remains till the program is terminated.
- **If needed to set a value to static variable. it should be done as:**
```c++
int student:: id=50; 
```
- In the outside defination, not inside the class.

# ⚡Static methods ( Member functions)

> Static function is a function that can access the static variables only not the other ones.
```c++
#include<iostream>
class student{
    private:
    int roll;
    static int id;
    
    public:
    void take(void)
    {
        std::cout<<"Enter roll no: "<<std::endl;
        std::cin>>roll;
        id++;
    }
    void show(void)
    {
        std::cout<<"Roll no: "<<roll<<std::endl;
        std::cout<<"Id: "<<id<<std::endl;
    }
    static void getid(void) //This is the static function and it takes only the static variables
    {
        //std::cout<<roll;    //gives an error..
        std::cout<<"Static ID: "<<id<<std::endl;
    }
};
int student:: id;
int main()
{
    student s1,s2,s3;
    s1.take();
    s1.show();
student::getid();   //Running without any object reference.  Can also use object, s1.getid(); is also valid.
    s2.take();
    s2.show();
student::getid();
    s3.take();
    s3.show();
student::getid();

}
```
> This program uses a static function.
```c++
 static void getid(void) //This is the static function and it takes only the static variables
    {
        //std::cout<<roll;    //gives an error..
        std::cout<<"Static ID: "<<id<<std::endl;
    }
    ```
