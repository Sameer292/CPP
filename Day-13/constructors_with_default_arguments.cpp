#include<iostream>
using namespace std;
class random{
    int a,b,c;
    public:
    random(){

    }
    random(int x, int y=0, int z=0)
    {
        a=x;
        b=y;
        c=z;
    }
    void print()
    {
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    }
};
int main()
{
 random m(5);
 random n(5,6);
 random o(5,6,7);

m.print();
n.print();
o.print();
 return 0;
}