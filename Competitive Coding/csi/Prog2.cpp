//Q 2:
//Given, an input string of text, program outputs everything except the repeat occurrence of first
//character in a string. Note, there are no spaces in either the input or the output. Output should maintain
//the order of characters

#include <bits/stdc++.h>
using namespace std;

//Function to find the first repeating character
char first_Rep(string &str)
{
    unordered_set<char> H;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];

        if (H.find(c) != H.end())
            return c;

        else
            H.insert(c);
    }
    return '\0';
}

int main()
{
    string str;
    cin >> str;
    char fir = first_Rep(str); //storing the first repeating character in fir
    int first_count = 0;       // initializing count to 0 to print the first repeating character only once
    for (int i = 0; i < str.length(); i++)
    {
        if (fir != str[i]) //to print only the non first repeating elements
        {
            cout << str[i];
        }
        if (fir == str[i] && first_count == 0) //printing the first repeating element only once
        {
            cout << str[i];
            first_count++;
        }
    }
}

// inp:
// INDIANIZATION

// output:
// INDANZATON