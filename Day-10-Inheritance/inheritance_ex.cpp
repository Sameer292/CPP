#include <iostream>
#include<cmath>
using namespace std;
class simpleCalculator
{
    int a,b;
    double sum,diff,mul,div;
    public:
    void input()
    {
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
        sum=a+b;
        diff=a-b;
        mul=a*b;
        div=a/b;
        output();
    }
    void output()
    {
        cout<<endl;
        cout<<"Output:- "<<endl<<endl;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Diff:"<<diff<<endl;
        cout<<"Mul: "<<mul<<endl;
        cout<<"Div: "<<div<<endl;
    }
};
class scientificCalculator
{
    int a,b;
    double si, co, ta, crt;
    public:
    void input()
    {
        cout<<"Enter a number: "<<endl;
        cin>>a;
        process();
    }
    void process()
    {
        si = sin(a);
        co = cos(a);
        ta = tan(a);
        crt = cbrt(a);
        output();
    }
    void output()
    {
        cout<<"Output:-"<<endl<<endl;
        cout<<"Sin("<<a<<"):"<<si<<endl;
        cout<<"Cos("<<a<<"):"<<co<<endl;
        cout<<"Tan("<<a<<"):"<<ta<<endl;
        cout<<"Cube root: "<<crt<<endl;
    }


};
class hybridCalculator : public simpleCalculator , public scientificCalculator
{

};
int main()
{
    simpleCalculator simple;
    simple.input();
    scientificCalculator scientific;
    scientific.input();
}