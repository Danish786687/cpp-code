#include<iostream>
using namespace std;

void print(int *arr,int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void countsort(int arr[],int n){
    int freq[10000]; //range
    int minval=INT32_MAX, maxval=INT16_MIN;

    //to findrange
    for(int i=0 ; i<n; i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);

    }

    //1st step
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    //2nd step
    for(int i=minval , j=0 ; i<=maxval; i++){
        while(freq[i]>0) {
            arr[j++]=i;
            freq[i]--;
        }

    }
    print(arr,n);
}





int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    countsort(arr,n);
    return 0;


}