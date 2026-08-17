#include<iostream>
#include <algorithm>  //inbuilt fn
using namespace std;
void print(int *arr,int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    // sort(arr+2,arr+5);  //ascending
    // print(arr,n);
    
    sort(arr,arr+8,greater<int>());
    print(arr,n);  //descending
    return 0;
}