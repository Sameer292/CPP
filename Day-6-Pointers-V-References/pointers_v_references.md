# ⚡Pointers
> They store the actual address of the variable.

> Let's take an example
```c++
int* ptr;
int var=7;
int foo=21;
```
> At this point if we were to print the values of "ptr" It'd be NULL or a random value because It's not yet assigned to a variable, thus it's not pointing at anything yet.

> "var" would print 7 and "foo" would print 21.

> **⚡Now let's point at something.**
```c++
int* ptr;
int var=7;
int foo=21;
ptr= & var;
```
> Now that the pointer is pointing at the address of "var", the pointer variable "ptr" now holds the address of "var".
> We can also replace the address that the pointer variable is holding.
> We can assign different variable to the same pointer and it'll point to the new variable's address.

```c++
int* ptr;
int var=7;
int foo=21;
ptr= & var;
ptr= &foo;
```
> "ptr" now holds the address of "foo" .
> Now, if we were to print the value of "ptr" it'd print the address of "foo".
### **NOTE:**The actual value that the pointer is pointing to can be accessed using astrisk(*) sign in front of the pointer variable.




# ⚡References
> They take the variable and assign tmemselves to the values stored in the variable.
> It's like giving multiple names to a variable.

> **Example:**
```c++
int var=7;
int& ref=var;
```
> Now, what this does is, it creates multiple ways of referencing the same value.

> In this case both "ref" and "var" now refrence the same value. 

## **NOTE:**References must be initialised during declaration.


> The main difference between pointers and references is that pointers point to the address of a variable, whereas references create multiple ways to reference the same value. 

> Also, unlike pointers we cannot change the reference of a reference variable.
```c++
int var=7;
int& ref=var;
int foo=21;
ref = foo;
```

> This cannot be done in references. Whereas in pointers we can change the address that the pointer variable is holding.
