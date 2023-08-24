//Data types are the types in which we can declare a variable in.
//To store a value, we need a variable and these variables can be off different types.
//There are mainly two types of data types.... primary data types and user-defined data types 


//Primary data types
//int, float, char, double, wchar_t, bool, void are primary data types
//normally float can hold only precision upto 6 digits after the decimal but using double it can hold up to 12 digits or 64 bits precision after the decimal point

//bool holds two values true or false. 0 is false and everything except 0 is true

//void is a return type of a function. If a function is not returning anything we us e void return type
//void is also used in pointers. It can point to any data type. It is used when we do not know the data type of the variable

//wchat_t is the wide character data type. It is similar to char data type. Char takes 1 byte whereas qchar_t takes two bytes. depending upon the compiler it can sometimes take 2 bytes. It is used because in ASCII there are only english alphabets numbers and some special symbols. But for different languages we cannot use ascii. For those languages and also english we can use wchar_t. wchar_t uses unicode rather than ASCII
//It's syntax: wchar_t <variable_name>=L'character';



//Array, pointer, functions, reference are derived data types

//class, structure, union, enum, typedef are user-defined data types


//Modifiers signed, unsigned, short, long.. These can modify the data types
// signed data type means it can store both positive and negative data values. But unsigned can only store positive data values
//int normally takes 4 bytes of memory but using short int it can store 2 bytes of memory.. If we need to store small value short modifier is used
//long int also takes 8 bytes
// If you want to store a largeeee value you can use long long int. It takes 8 bytes of memory and thus a largee value can be stored in it.

//NOTE: int by default is signed.

#include<iostream>
using namespace std;
int main()
{
    int i=10; //int is used to store integers values.. 1,100,20,88 etc.. It occupies 4 bytes
    float f=10.10; //float is used to store floating point values. These are integers and decimale. 10,22.2,99.002 etc
    char c='s'; //char is used to store character values. a , b ,%,^,& etc..
    signed int si=-1000; //signed int can store negative values also
    unsigned int ui=35000; // only positive values are stored
    long int li=1000000;
    long long lli=2000000000000; //takes 8 bytes memory
    bool b=true; //bool data type can only hold true or false value. It takes 0 as false and 1 as true
    const wchar_t w=L'ゑ';


    cout<<"int: "<<i<<endl;
    cout<<"float: "<<f<<endl;
    cout<<"char: "<<c<<endl;
    cout<<"Signed int: "<<si<<endl;
    cout<<"Unsigned int: "<<ui<<endl;
    cout<<"Long int: "<<li<<endl;
    cout<<"long long int: "<<lli<<endl;
    cout<<"Bool: "<<b<<endl;
    cout<<"Wide char: "<<w<<endl; //make sure your development environment supports wide character output

    return 0;

}