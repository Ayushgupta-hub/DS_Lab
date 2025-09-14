#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class MinStack
{
    stack<long long> st;
    long long minELE;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (st.empty())
        {
            st.push(val);
            minELE = val;
        }
        else if (val >= minELE)
        {
            st.push(val);
        }
        else
        {

            long long encoded = 2 * (long long)val - minELE;
            minELE = val;
            st.push(encoded);
        }
    }

    void pop()
    {
        if (st.top() >= minELE)
        {
            st.pop();
        }
        else
        {
            minELE = 2 * minELE - st.top();
            st.pop();
        }
    }

    int top()
    {
        if (st.top() < minELE)
        {

            return minELE;
        }
        return st.top();
    }

    int getMin()
    {
        return minELE;
    }
};
int main()
{
    MinStack st;  
    st.push(70);
    st.push(50);
    st.push(90);
    st.push(30);
    st.push(10);
    st.push(40);
    st.push(80);
    st.push(60);
    
    cout<<"Minimum element is : "<<st.getMin()<<endl;
    
    
    return 0;
}