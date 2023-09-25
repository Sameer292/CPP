// Passing objects as arguments in function

#include <iostream>
using namespace std;
class jpt
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void setdatabyobj(jpt o1, jpt o2)   //We are taking two objects as arguments
    {
        a = o1.a + o2.a;    //accessing the data from the objects 
        b = o1.b + o2.b;
    }
    void printnum()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int main()
{
    jpt j1, j2, j3;
    j1.setdata(1, 2);
    j1.printnum();
    j2.setdata(3, 4);
    j2.printnum();

    j3.setdatabyobj(j1, j2);        //sending objects as arguments.
    j3.printnum();
    return 0;
}