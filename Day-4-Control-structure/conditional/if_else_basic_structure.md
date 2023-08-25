# ⚡Basic syntax(structure) of if() statement

```c++
#include<iostream>
using namespace std;
int main()
{
    char choose;
    cout<<"What do you want?(Tea(t)/Coffee(c))"<<endl;
    cin >> choose;
    if(choose=='t')
    cout<<"Here's youe Tea. :D"<<endl;

//For any if statement else statement is not a must.
//But for every else statement if statement is a must.
    
    if(choose=='c')
    cout<<"Here's your Coffee. :D"<<end;

    return 0;
}
```
# ⚡Basic syntax of if else statement
```c++
#include<iostream>
using namespace std;
int main()
{
    //variable declaration
    if(condition)
    {
        statements;
    }
    else
    {
        statements;
    }
    return 0;
}
```
# ⚡Basic syntax of ladder if
```c++
#include<iostream>
using namespace sd;
int main()
{
    variables;
    if(condition)
    {
        statements;
    }
    else if(condition)
    {
        statements;
    }
    else if(condition)
    {
        statements;
    }
    else
    {
        statements;
    }
    return 0;
}
```
# ⚡Basic syntax of nesed if
```c++
#include<iostream>
using namespace std;
int main()
{
    variables;
    if(condition)
    {
        if(condition)
        {
            if(condition)
            {
                statements;
            }
            else
            {
                statements;
            }
        }
        else
        {
            statements;
        }
    }
    else
    {
        statements;
    }
    return 0;
}
```
