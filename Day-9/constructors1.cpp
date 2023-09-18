#include<iostream>
class test{
    public:
    int x,y;
    test()
    {
        x=1;
        y=2;
    }
    void write(void)
    {
        std::cout<<x<<","<<y<<std::endl;
    }
};
int main()
{
  test a1,a2,a3;
  a1.write(); 
  a2.write();
  a3.write();  
}