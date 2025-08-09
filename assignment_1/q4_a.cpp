#include <iostream>
using namespace std;
int arr[50];
int sz=0;
void reverse(){
    for(int i =0,j=sz-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void display(){
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    cout<<"Enter the number of elements: ";
    cin>>sz;
    cout<<"Enter the numbers:"<<endl;

    for(int i =0;i<sz;i++){
        cin>>arr[i];
    }
    reverse();
    display();

    return 0;
}