#include <iostream>
#include <queue>
using namespace std;
void nonRepeating(string&s){
    queue<char>q;
    int arr[122]={0};
    
    for(int i=0;i<s.size();){
        q.push(s[i]);
        arr[s[i]]++;
        if(q.empty()){
            cout<<"-1"<<" ";
            i++;
        }
        else if(arr[q.front()]==1){
            cout<<q.front()<<" ";
            i++;
        }
        else{
            while(arr[q.front()]>1){
                q.pop();
            }
        }
    }
}
int main(){

   string s;
   cout<<"Enter string: ";
   cin>>s;
   
   nonRepeating(s);

   return 0;
}
