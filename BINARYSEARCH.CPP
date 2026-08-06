#include<iostream>
using namespace std;



int binarysearch(int *arr,int n,int key){
    int st=0;int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;  //   ORR  mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;  //key found
        }
        else if(arr[mid]<key){  //2nd half
            st=mid+1;
            
        }
        else{ //1 half
            end=mid-1;   //in the first search mid value become end and search from the 1st elemnt

        }
        
}
return -1;
}
int main (){
    int key;
    cout<<"enter key: ";
    cin>>key;
    int arr[]={2,4,6,8,9,11,12,13,17};
    int n=sizeof(arr)/sizeof(int);

    cout<< binarysearch(arr,n,key);
}
