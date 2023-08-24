#include<iostream>
#include<string>
using namespace std;
class sameer{
    public:
    char name[20]; 
    int age;
    unsigned long long int phone; //this takes a large amount of memory (8 bytes) but can store very large value
    void data()
    {
        cout<<"\n\nName: "<<name<<"\nAge: "<<age<<"\nContact: "<<phone<<endl;
    }
}me; //me object
int main()
{
    //details of me object
    cout<<"Enter your name: "<<endl;
    gets(me.name);
    cout<<"Enter your age: "<<endl;
    cin>>me.age;
    cout<<"Enter your phone: "<<endl;
    cin>>me.phone;

    me.data();  //function of me object

    return 0;

}
