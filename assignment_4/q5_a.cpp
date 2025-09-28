#include <iostream>
#include <queue>
using namespace std;
class MyStack
{
public:
    queue<int> q1;
    MyStack()
    {
    }

    void push(int x)
    {
        queue<int> q2;
        int n = q1.size();
        for (int i = 0; i < n; i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        for (int i = 0; i < n; i++)
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int x = q1.front();
        q1.pop();
        return x;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        if (q1.empty())
            return 1;
        else
            return 0;
    }
};
int main()
{
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<st.top()<<endl;



    return 0;
}
