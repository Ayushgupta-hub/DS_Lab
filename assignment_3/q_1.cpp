#include <iostream>

using namespace std;

class Stack
{

    int arr[100];
    int idx = -1;

public:
    void push(int val)
    {
        if(idx>=99){
            cout<<"Stack overflow"<<endl;
        }
        arr[++idx] = val;
    }
    void pop()
    {
        if (idx < 0)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        idx--;
    }
    int peek()
    {
        if(idx<0){
            cout<<"Empty stack"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
    void display(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<"Stack elements from top to bottom: "<<endl;
        for(int i=idx;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool isEmpty(){
        if(idx<0) return 1;
        else return 0;
    }
    bool isFull(){
        if(idx==99) return 1;
        else return 0;
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    cout << st.peek() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.peek() << endl;
    cout << st.size();
    cout<<endl;
    st.display();

    return 0;
}
