# ⚡Unconditional branching statements- goto
> goto is used to go to any line of the program randomly.
> it needs a label to transfer the control to. 
> It has many uses. One of them is to create a loop

> example:
```c++
#include<iostream>
using namespace std;
int main()
{
    int i=0; 
    here: // this is label for the goto statement...
    cout<<i<<endl;
    i++;
    if(i<=10)
    goto here; //this here is the calling of goto statement and the label.

    return 0;
}
```

> in this program. there is **here:** label after the initialization of i. When the control reaches the if statement if the condition is true then the goto statement is executed which transfers the control to the here: label and the program runs from there hence creating a loop.
