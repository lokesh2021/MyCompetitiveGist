#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str)
{
    stack<char> stk;
    char ch;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            stk.push(str[i]);
            continue;
        }
        if (stk.empty())
            return false;
        switch (str[i])
        {
        case ')':
            ch = stk.top();
            stk.pop();
            if (ch == '[' || ch == '{')
                return false;
            break;

        case ']':
            ch = stk.top();
            stk.pop();
            if (ch == '(' || ch == '{')
                return false;
            break;

        case '}':
            ch = stk.top();
            stk.pop();
            if (ch == '[' || ch == '(')
                return false;
            break;
        }
    }
    return stk.empty();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    isBalanced("[{}(){()}]") ? cout << "Balanced"<<endl : cout << "Not Balanced"<<endl;
    isBalanced("[{}({()}]") ? cout << "Balanced" : cout << "Not Balanced";
    
    return 0;
}