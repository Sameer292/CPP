#include<iostream>
#define pi 3.1415926
using namespace std;
class myClass{
    public: //setting the class to public. We can make a class public private or protected. Everyone can access public. 
    //Authorised can use protected. And noone else can use private.
    float ar;
    float area(int r){
        cout<<"Hello , This is myClass class.";
        ar=pi*r*r;
        return ar;
    }  //we can also define a function inside a class..
}print;

int main()
{
int a;
cout<<"Hello, this is the main function.\n";
cout<<"Enter the radius: \n";
cin>>a;
float circle=print.area(a);//function inside a class is accessed using the (.)
cout<<"The area is: "<<circle<<"\n";
return 0;
}