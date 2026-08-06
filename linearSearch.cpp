#include<iostream>
using namespace std;
int n,key;
int linearSearch(int *arr,int n,int key){
    for(int i=0;i<n;i++) {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,8,4,6,5,7};
    n=sizeof(arr)/sizeof(int);

    cout<< linearSearch(arr,n,5)<<endl;
    return 0;


}