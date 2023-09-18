# ⚡Enum (Enumeration)

> Enum is a set of values grouped together.
> It's a way to name a value.

> example:
```c++
int a,b,c;
```
> We have declared three int values without assigning any values.
```c++
enum values{
    a,b,c
}
```
> This is enum. It initialises the first value with 0 and increments by 1 for each next value.

> Here, by default a=0,b=1,c=2

> Enums limit what value can be assigned to a certain variable.

> for example
```c++
enum values{
    a,b,c
}
int main()
{
    values num=b;
}
```
> This is valid. 

> num is a values type variable and can only hold the values that are inside the values enum i.e. a,b,c.

```c++
enum values{
    a,b,c
}
int main()
{
    values num=10;
}
```
> This is not valid.
>num being a values type variable cannot hold anything other than from values enum.


## ⚡NOTE
### ENUM is an integer.