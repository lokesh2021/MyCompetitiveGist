#include<iostream>
using namespace std;
int main()
{
    string str = "madam";
    int i=0,j=str.length()-1;
    for( i,j;i<str.length();i++,j--)
    {
        if(str[i]==str[j])
        {
            cout<<"String is Palindrome";
            return 0;
        }
        else
        {
            cout<<"String is not a Palindrome"<<endl;
        }
    }
}