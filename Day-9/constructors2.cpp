#include<iostream>
class test{
    public:
    int a,b;
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    void write(void)
    {
        std::cout<<a<<","<<b<<std::endl;
    }
};
int main()
{
  test a1(5,6);
  a1.write();   
}