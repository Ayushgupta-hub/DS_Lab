#include <iostream>
#include <stack>
#include <string>
using namespace std;

void displayTop(stack<char> &st)
{
    if (st.size() == 0)
        return;
    cout << st.top() << " ";
    char ch = st.top();
    st.pop();
    displayTop(st);
    st.push(ch);
}
void displayBottom(stack<char> &st)
{
    if (st.size() == 0)
        return;

    char ch = st.top();
    st.pop();
    displayBottom(st);

    cout << ch << " ";
    st.push(ch);
}

int main()
{
    stack<char> st;
    string s = "DataStructure";
    for (char ch : s)
    {
        st.push(ch);
    }

    displayBottom(st);
    cout << endl;

    displayTop(st);

    return 0;
}