
# Day 3

## **Today i learnt about:**
* ### **Structures as paramaters in** C
* ### **Class and Constructor in C++**
* ### **Template Class :**   Whenever we need same class for different uses i.e, one class for integer type values and another for floating point numbers then we can use Template class to make sure we use the same class fro different data types
* ## Stack vs Heap

## Time Spent : **03:35 hrs**

/
# Class and Constructor in C++

```cpp
#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
        int length,breadth;
    public:
        Rectangle(){    //Constructor
            length = breadth = 1;
        }
        Rectangle (int l,int b); //Parameterized Constructor
        int area();
        int perimeter();
        int getLength(){
            return length;
        }
        void setLength(int l){
            length = l;
        }
        ~Rectangle();
    };

// Now i'll be implementing functions using scope resolution 
// outside the class

Rectangle::Rectangle(int l,int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
Rectangle::~Rectangle()
{

}

// Now ill use the above Functions in main()

int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<"\n";       //output 50
    cout<<r.perimeter()<<"\n";   //output 30
    r.setLength(20);           
    cout<<r.getLength()<<"\n";   //output 20
}
```
\
# Template Class

```cpp
#include<bits/stdc++.h>
using namespace std;

//template keyword is used to create Template Class with variable "T" and in the main function any Datatype can be passed to the Template using this "T".

template <class T> 
class Arithametic{
    private:
        T a;
        T b;
    public:
        Arithametic(T a,T b );
        T add();
        T sub();
};

template <class T>
Arithametic<T>::Arithametic(T a,T b)
{
    this->a  = a;
    this->b = b;
}
template <class T>
T Arithametic<T>::add()
{
    T c;
    c = a+b;
    return c;
}
template <class T>
T Arithametic<T>::sub()
{
    T c;
    c = a-b;
    return c;
}

int main()
{
    Arithametic<int> ar(10,5);      //here <int> is the datatype which we are passing to the template class
    cout<<ar.add()<<"\n";           //output : 15
    Arithametic<float> arf(1.5,1.2);
    cout<<arf.add();                //output : 2.7
}
```