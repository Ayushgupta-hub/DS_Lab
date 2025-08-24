#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter dimensions of sqr matrix: ";
   cin>>n;
   int m= 3*n-2;
   int arr[m];
   cout<<"Enter numbers for tridiagonal mat: "<<endl;
   for(int i=0;i<m;i++){
    cin>>arr[i];
   }
   cout<<endl;
   int k=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i==j+1)||(i==j-1)|| i==j){
            cout<<arr[k++]<<" ";
        }
        else{
            cout<<"0"<<" ";
        }
    }
    cout<<endl;
   }

   return 0;
}