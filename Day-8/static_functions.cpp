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