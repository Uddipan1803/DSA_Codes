/*For a given a string expression containing only round brackets or parentheses, check if they are balanced or not.
Brackets are said to be balanced if the bracket which opens last, closes first.
Example:
Expression: (()())
Since all the opening brackets have their corresponding closing brackets, we say it is balanced and
hence the output will be, 'true'.*/

#include <iostream>
#include <string>
#include<stack>
using namespace std;

bool isBalanced(string expression)
{
   stack<char> s1;
    int s=0;
    for(int i=0;expression[i]!='\0';i++)
    {
        if(expression[i]=='(' || expression[i]=='{' || expression[i]=='[')
        {
            s1.push(expression[i]);
        }

    }
    for(int i=0;expression[i]!='\0';i++)
    {
        if(expression[i]==')')
        {
            if(s1.size()==0)
                return false;
            char x=s1.top();
            s1.pop();
            if(x=='{' || x=='[')
            {
                return false;
            }
        }
        else if(expression[i]=='}')
        {
            if(s1.size()==0)
                return false;
            char x=s1.top();
            s1.pop();
            if(x=='(' || x=='[')
            {
                return false;
            }
        }
        else if(expression[i]==']')
        {
            if(s1.size()==0)
                return false;
            char x=s1.top();
            s1.pop();
            if(x=='{' || x=='[')
            {
                return false;
            }
        }
    }
    return s1.empty();
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
