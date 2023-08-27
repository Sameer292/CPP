# ⚡Pointers

> Pointers are the variables that hold the address of an another variable.

> They can be of different types i.e int pointer, float pointer, double pointer, Void pointer etc.

> example

```c++
#include<iostream>
using namespace std;
int main()
{
    int var=8;
    int *ptr= &var; //Here we are assigning the memory address of 'var' to the integer pointer 'ptr'
    cout<<"var: "<<var<<endl; //This prints the value of var as regular
    cout<<"*ptr: "<<*ptr<<endl; //This prints the value of var as well. Because ptr is holding the memory adderess of var and using * we can access the value
    cout<<"ptr: "<<ptr<<endl; //This now prints the Hex integer value of the memory locatio of var. SInce no * is used it prints the actual memory location of var.

    return 0;
}

```

> void pointers cannot be used to change the value of the original variable. SInce void literally means nothing the compiler wouldn't know what type of data is to be changed.

> example:

```c++
int var=8;
void* ptr= &var;
*ptr =20;
```
> This wouldn't work because we have used void pointer to point to an integer variable. SInce the pointer has no idea of the data type it cannot change it.

> this would work instead:

```c++
int var=8;
int* ptr=&var;
*ptr = 10;
```

> We now have integer pointer and it can now put integer values to tha assigned variables.
