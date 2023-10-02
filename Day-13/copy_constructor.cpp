#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){a=0;}
    number(number &obb)
    {
        a=obb.a;
    }
    number(int num)
    {
        a=num;
    }
    void show()
    {
        cout<<"Number is: "<<a<<endl;
    }
};
int main()
{
 number n1,n2,n3(50);
 number n4(n3);
 n3.show();
 n4.show();
 return 0;
}