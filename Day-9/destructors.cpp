#include<iostream>
class test{
    public:
    int a,b;
    test()
    {
        a=5;
        b=10;
        std::cout<<"Created test!!!"<<std::endl;
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