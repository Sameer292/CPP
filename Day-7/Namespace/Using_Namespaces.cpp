#include<iostream>
namespace add{
    void num(int a, int b)
    {
        int sum=a+b;
        std::cout<<"The sum is: "<<sum<<std::endl;
    }
}

namespace sub{
    void num(int a, int b)
    {
        int diff=a-b;
        std::cout<<"The diff is: "<<diff<<std::endl;
    }
}
int main()
{
    int a,b;
    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>>a>>b;
    add::num(a,b);
    sub::num(a,b);
    
}