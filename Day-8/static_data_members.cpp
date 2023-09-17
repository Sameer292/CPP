#include <iostream>
class student{
    private:
    int roll;
    char name[100];
    static int id;  //variable defination

    
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

//int student:: id=50;    //IF needed to set a value it should be done here not inside the class.

int main()
{
    student s1,s2;
    s1.indata();
    s1.outdata();
    s2.indata();
    
    s2.outdata();
    return 0;
}