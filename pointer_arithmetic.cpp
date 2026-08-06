// #include<iostream>
// using namespace std;
// int main(){
//     int a=19;
//     int *ptr=&a;
//      cout<<ptr<<endl;/////1st
//     // ptr++;    //////////1int ++   1st same as 3rd 
//     // cout<<ptr<<endl;
//     // ptr--;
//     // cout<<ptr<<endl;////3rd

// //     ptr=ptr+2; // additon
// //     cout<<ptr<<endl;
// // 



// }
 
//fetching array ellement using pointer concept

// #include<iostream>
// using namespace std;

// printarr(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         cout<< *ptr << endl; // printing array by pointer arithemetic  or by  *(ptr+i)
//         ptr = ptr +1;
//     }

// }
// int main(){
//     int arr[]={3,2,4,5,1,12};
//     int n=sizeof(arr)/sizeof(int);
//     printarr(arr,n);
//     return 0;

// }

#include<iostream>
using namespace std;
int main(){
    //int a=90;
    int arr[20]={2,4,6,5,3,2,3};
    int *ptr1=arr;
    int *ptr2=ptr1+3;

    cout<<*ptr1<<endl;    //derefrencing 2
    cout<<*ptr2<<endl;     //3

        cout<<ptr2-ptr1<<endl;  //3 output

        cout<<(ptr2<ptr1)<<endl;  //0 output
        cout<<(ptr2==ptr1)<<endl;  //0 output
        cout<<(ptr2==arr)<<endl;  //0 output
        cout<<(arr==ptr1)<<endl;  //1 output

}
