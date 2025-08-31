#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (st.size() == 0)
                return false;
            if (ch == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (ch == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (ch == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
                return false;
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}

int main()
{
    string s="(({{[[]]}[}]))";
    cout<<isValid(s);
    return 0;
}