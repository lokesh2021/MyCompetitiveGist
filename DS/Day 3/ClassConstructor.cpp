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