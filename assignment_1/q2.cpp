#include <iostream>
using namespace std;

int arr[50];
int sz=0;

void duplicate(){
    for(int i =0;i<sz;i++){
        for(int j=i+1;j<sz;){
            if(arr[i]==arr[j]){
                
                for(int k=j;k<sz-1;k++){
                    arr[k]=arr[k+1];
                }
                sz--;
            }
            else{
                j++;
            }
        }
    }
}

void display(){
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    cout<<"Enter the size of the array: ";
    cin>>sz;
    cout<<"Enter the numbers:"<<endl;

    for(int i =0;i<sz;i++){
        cin>>arr[i];

    }
    duplicate();
   
    display();
    

    return 0;
}