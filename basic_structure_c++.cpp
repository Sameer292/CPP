//WAP to demonstrate the basic structure of C++
// 1.Documentation section
// 2.defination section
// 3.global declaration
// 4.class defination
//     a.data members
//     b.member function defination
// 5.Main function defination

/*Documentation section is used to document our code. The purpose of the cpde and anything else we might need for better understanding of the code.
it helps the programmer to get context of the program in future and also to anyone using the code.*/

#include<iostream>
//This is the iostream header. It contains the input and output streams. istream and ostream. containing objects like cin, cout, etc.
//It is accessed using the # preprocessor.

#define pi 3.1415926

//this is the defination section. We use it to define constant values like of pi or e etc. It is a constant. Whenever we use pi in our program it's 
//value remains constant.

int r=5;
//This global declaration

void area();
//Function declaration

class FirstClass{
    public:
    int a;//data declaration
    void hello() //function declaration
    {
        std::cout << "Hello world!" << std::endl;
        //std is the namespace.
    }helloo;

};//class defination/declaration
//class is ended with a semicolon ;
int main()//main function
{
    class FirstClass c;
    helloo.hello();
area();
    //function calling
return 0;
}

//function defination
void area()
{
    float ar;
    std::cout << "Enter the radius of circle: " <<std:: endl;
    std::cin>> r;
    ar=pi*r*r;
    std::cout <<"The area of the circle is: "<<ar<<std::endl;
}

