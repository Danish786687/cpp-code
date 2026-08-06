
// /with extra space

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n,j;
//     n=sizeof(arr)/sizeof(int);
//      int arr2[n];
//     for(int i=0;i<n;i++){
//         int j=n-i-1;
//         arr2[i]=arr[j];
   
//         }
//     for(int i=0;i<=n;i++){
//         arr[i]=arr2[i];
//         }
//     for( int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }      
// }

// WITHOUT EXTRA SPACE( two pointer  concept)
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,3,2,};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;

    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";

    }

}