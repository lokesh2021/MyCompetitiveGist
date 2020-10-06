# Day 6

* ### Static and Global Variables in Recursion
* ### Types of Recursion



## **Static and Global Variables in Recursion**

```cpp
#include<bits/stdc++.h>
using namespace std;

int x=0;        //Global variable
int fun(int n)
{
    //  static int x=0; //Static variable
\    if(n>0){
        x++;
        return fun(n-1)+x;      // is called while returning call.
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    cout<<r;        //25
    r = fun(5);
    cout<<r;        //50,    because previos function changed the global variable X to 5,
                    // and now its starting from x = 5 instead of x = 0.
    return 0;
}

```