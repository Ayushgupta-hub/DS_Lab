#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter dimensions of sqr matrix: ";
   cin>>n;
   int arr[n];
   cout<<"Enter numbers: ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<"0"<<" ";
        }

    }
    cout<<endl;
   }

   return 0;
}