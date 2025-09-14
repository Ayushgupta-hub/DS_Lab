#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> smaller(vector<int> &v)
{
    stack<int> st;
    vector<int> result(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        while (st.size() > 0 && st.top() >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            result[i] = -1;
            
        }
        else{
            result[i]=st.top();
        }
        st.push(v[i]);
         
        
    }
    return result;
}

int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> result = smaller(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}