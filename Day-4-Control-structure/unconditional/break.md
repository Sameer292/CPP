# ⚡Unconditional branching statements- break

> break is used to terminate a loop

> example:-
```c++
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=100;i++)
    {
        cout<<i<<endl;
        
        if(i==50)
        break;
    }
    return 0;
}
```
> In this program eventhough the loop is supposed to iterate 100 times it doesn't because we have called an if statements which, if the condition meets, breaks the loop.
> Thus this program only prints till 50 after which the if statement is run that is break; and it breaks the loop.