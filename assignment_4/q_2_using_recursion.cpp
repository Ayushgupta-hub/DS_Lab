#include <iostream>
#include <stack>
#include <string>
using namespace std;

void pushAtBottom(stack<char>&st,char ch){
    if(st.size()==0) {
        st.push(ch);
        return;
    }
    char x=st.top();
    st.pop();
    pushAtBottom(st,ch);
    st.push(x);
}

void reverse(stack<char>&st){
    if(st.size()==1) return;
    char ch=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,ch);
    
}
void displayTop(stack<char>&st){
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    char ch=st.top();
    st.pop();
    displayTop(st);
    st.push(ch);
}


int main(){
   stack<char>st;
   string s="DataStructure";
   for(char ch:s){
    st.push(ch);
   }
   displayTop(st);
   cout<<endl;
   reverse(st);
   displayTop(st);

   return 0;
}