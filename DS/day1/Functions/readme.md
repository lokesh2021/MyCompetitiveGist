# Functions
## A piece of code which can perform a specific task.

There are 3 types of parameter passing methods:
* Pass by Value

```cpp
int add(int a, int b) //Prototype
{
    int c;
    c = a+b;
    return c;
}
int main(){
    int x,y,ans;
    x = 10;
    y = 5;
    cout<<add(x,y); //Actual parameters
}
```

# Pass by Value
Q) when/where to use Pass by Value?

Ans. 
* When/where we dont want to change the actual paramaters. 
* if the function is returning some results
```cpp
void swap(int x,int y )
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
    cout<<a<<b; //here the the same values of a and b are printed i.e, a=10 and b=20 
}
```


# Pass by Address
Q) when/where to use Pass by Address?

Ans.  When/where we want to change the actual paramaters. 
```cpp
void swap(int *x,int *y )
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    a = 10;
    b = 20;
    swap(&a,&b);
    cout<<a<<b; //here the the values of a and b are swapped.
}
```

# Pass by Reference
Q) when/where to use Pass by Value?

Ans. 
* When/where we dont want to change the actual paramaters. 
* if the function is returning some results
```cpp
void swap(int &x,int &y)    //add & in the protoype
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
    cout<<a<<b; //here the the values of a and b are swapped
}
```