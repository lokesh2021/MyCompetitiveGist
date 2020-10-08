# Types of Recursion (Part 2)
* ## Indirect Recursion
* ## Nested Recursion

## **Indirect Recursion**
Two or more Recursive Functions calling on another in a circular fashion is known as **Indirect Recursion**.

```cpp
void funA(int n)
{
    if(n>0){
        cout<<n;
        funB(n-1);  //Indirect Recursion
    }
}
void fubB(int n)
{
    if(n>1){
        cout<<n;
        funA(n/2);
    }
}

//  Output : 20, 19, 9, 8, 4, 3, 1 

```

## **Nested Recursion**
Recursive Functions inside another Recursive Functions is known as **Indirect Recursion**.

```cpp
void funA(int n)
{
    if(n>0){
        cout<<n;
        funB(n-1);  //Indirect Recursion
    }
}
void fubB(int n)
{
    if(n>1){
        cout<<n;
        funA(n/2);
    }
}

//  Output : 20, 19, 9, 8, 4, 3, 1 

```