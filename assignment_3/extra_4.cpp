#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> dailyTemperatures(vector<int> &t)
{
    int n = t.size();
    vector<int> ans(n, 0);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
        {
            ans[i] = 0;
            st.push(i);
        }
        else if (t[i] < t[st.top()])
        {
            ans[i] = st.top() - i;
            st.push(i);
        }
        else
        {
            st.pop();
            i++;
        }
    }
    return ans;
}
int main()
{
    vector<int> temperatures;
    cout << "Enter number of Elements :";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element :";
        int a;
        cin >> a;
        temperatures.push_back(a);
    }
    vector<int> ans;
    ans = dailyTemperatures(temperatures);

    for (int ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}