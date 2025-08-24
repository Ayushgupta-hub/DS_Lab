#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter dimensions of sqr matrix: ";
   cin>>n;
   int m= n*(n+1)/2;
   int arr[m];
   cout<<"Enter numbers for symetric mat: "<<endl;
   for(int i=0;i<m;i++){
    cin>>arr[i];
   }
   cout<<endl;
  
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>=j){
            int idx=i*(i+1)/2+j;
            cout<<arr[idx]<<" ";
        }
        else{
            int idx=j*(j+1)/2+i;
            cout<<arr[idx]<<" ";
           
        }
    }
    cout<<endl;
   }

   return 0;
}
