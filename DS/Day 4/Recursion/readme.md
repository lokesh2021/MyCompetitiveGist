# **What is Recursion and How Recursion Works?**

##  A function that calls itself unless and untill a condition is satisfied.

## **Recursion has two phases**
* ### Calling Phase 
* ### Returning Phase

# **Example 1:**
```cpp
#include<bits/stdc++.h>
using namespace std;

void fun1(int n)
{
    if(n > 0){

             //executed while Calling 
        
        cout<<n<<" ";       //output: 3 2 1

             //executed while Returning 

        fun1(n-1);
    }
}
int main()
{
    int x = 3;
    fun1(x);
}
```
## Explination:

### First prints and decreases the number in recursion function fun1()

                fun1(3)
                /   \
                3   fun1(2)
                    /   \
                    2   fun1(1)
                        /   \
                        1   fun1(0)
                              |
                         stop recursion

# **Example 2:**
```cpp
#include<bits/stdc++.h>
using namespace std;

void fun1(int n)
{
    if(n > 0){
        fun1(n-1); 
        cout<<n<<" ";       //output: 3 2 1
    }
}
int main()
{
    int x = 3;
    fun1(x);
}
```
## Explination:

### First Decreases the number in recursion function **fun1(  )** untill the condition is satisfied ,then during the returning time the values are printed. 

                fun1(3)
                /   \
            fun1(2)  3 
                    /   \
                fun1(1)   2
                        /   \
                     fun1(0)  1 
                              |
                         stop recursion
