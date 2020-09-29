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