## Pointers 
Pointers are used to accessing resources outside the program.
* Accessing heaps
* Accessing Resources
* Parameter passing

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *p;
    p = &a;
    cout<<"initial value of a:"<<a<<"\n";
    cout<<"accessing a from pointer variable p: "<<*p;
}
```

## Heaps

```cpp
p = new int[5];
```

## Malloc
Malloc is used in C Langauge to allocate memory in Heap

```c
p = (int*)malloc(5 * sizeof(int));
```

