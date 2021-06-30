#include <bits/stdc++.h>
using namespace std;

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

int pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}

char *Convert(char *infix)
{
    stack<char> stk;
    char *postfix = new char[strlen(infix) + 1];
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre(infix[i]) > pre(stk.top()))
                stk.push(infix[i++]);
            else
            {
                postfix[j++] = stk.top();
                stk.pop();
            }
        }
    }
    while (!stk.empty())
    {
        postfix[j++] = stk.top();
        stk.pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int Eval(char *postfix)
{
    stack<int> stk;
    int i, x1, x2, r;
    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isOperand(postfix[i]))
        {
            stk.push(postfix[i]-48);
        }
        else
        {
            x2 = stk.top();
            stk.pop();
            x1 = stk.top();
            stk.pop();
            switch (postfix[i])
            {
            case '+':
                r = x1 + x2;
                stk.push(r);
                break;

            case '-':
                r = x1 - x2;
                stk.push(r);
                break;

            case '*':
                r = x1 * x2;
                stk.push(r);
                break;

            case '/':
                r = x1 / x2;
                stk.push(r);
                break;
            }
        }
    }
    return stk.top();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char infix[] = "234*+82/-";
    cout << Eval(infix) << endl;
    return 0;
}