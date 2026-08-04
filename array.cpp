// #include<iostream>
// using namespace std;
// int main(){
//     int mark[3]={3,2,1};
//      cout<<sizeof(mark)<<endl;

//      cout<<"length of array: "<<sizeof(mark)/sizeof(int)<<endl;



// }

// #include<iostream>
// using namespace std;
// int main(){
//     int mark[25]={4,5,6,2,1};
//     int i;
//     // int len=sizeof(mark)/sizeof(int); //length of array

//     // for(i=0;i<=len-1;i++){           //last index=len-1
//     //     cout<<mark[i]<<"  ";

//     // }
//     int n=sizeof(mark)/sizeof(int); //length of array

//     for(i=0;i<n;i++){
//         cout<<mark[i]<<" ";

//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
    
//     cout<<" eneeterr n : "; //dynamic array sizde
//     cin>>n;
//     //int n=sizeof(arr)/sizeof(int);

// int arr[n]; //dynamic array size
//     for(i=0;i<n;i++){
//         cout<<"enetr array elemnt : ";
//         cin>>arr[i];
//     }

//     for(i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     cout<< "enetr n : ";
//     cin>>n;
//     int arr[n];

//     for(i=0;i<n;i++){
//         cout<<"enter array element: ";
//         cin>>arr[i];
//     }
    
//     for(i=0;i<n;i++){
//         cout<<arr[i]<< "   "<<endl;
//     }
     
//     int max=arr[0];
//     for(i=0;i<n;i++){

//         if(max<arr[i]){
//             max=arr[i];
//         }

//     }
//                 cout<<"maximum  array element is : "<<max<<endl;

// }

// #include<iostream>
// using namespace std;

// int fun(int arr[]){
//     arr[0]=101;

// }


// int main(){
//     int arr[]={2,4,5,43,3};
//     // cout<< *arr << endl;  //onyl array name work as pointer(address of 1stelemtn)
//     // cout<< *(arr+1) << endl;
// fun(arr); //passimg array names means pass pointer
// cout<<arr[0];

// }

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

    cout<< linearSearch(arr,n,11)<<endl;
    return 0;


}