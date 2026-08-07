// #include<iostream>
// using namespace std;

// void subarray(int *arr,int n){
//     for(int start=0; start<n ;start++){
//         for(int end=start; end<n; end++){
//             // cout<< "(" << start << "," << end << ")";  // print index of the subarray
//             for(int i=start; i<=end; i++){
//                 cout<<arr[i];
//             }

//             cout<<",";
//         }
//         cout<<endl;
//     }
// }




// int main(){

//     int arr[5]={1 ,2 , 3, 4 , 5};
//     int n=sizeof(arr)/sizeof(int);
//     subarray(arr,n);
//     return 0;

    
// }

//AGAIN TRY....
#include<iostream>
using namespace std;

void subarray(int *arr,int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n;end++){
            // cout<<"(" << start << "," << end << ") "; //printing subarry index
            for(int i=start; i<=end; i++){
            cout<< arr[i];   ///print subarray elemnt
        }
        cout<< " , ";

        }
        cout<< endl;

        

    }    

    
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    subarray(arr,n);
    return 0;

}