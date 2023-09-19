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
class Player : public entity   //Sub-class use
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
    // using methods from different class using inheritance.
    a1.move(5,5);   
    a1.hello();
    a1.showPost();
}