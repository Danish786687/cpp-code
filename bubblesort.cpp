// #include<iostream>
// using namespace std;

// void print(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<< arr[i] << " ";
//     }
// }

// void bubble(int *arr,int n){       ///bigo n^2
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]<arr[j+1]){   //ASCEDNING SORTING FOR DECENDING if(arr[j]<arr[j+1]) sign change only oppo..
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     print(arr,n);
// }
// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n=sizeof(arr)/sizeof(int);
//     bubble(arr,n);
    


// }


//what if array is already sorted then tc=bigo n by optimised code

#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}

void bubble(int *arr,int n){       ///bigo n^2

    for(int i=0;i<n-1;i++){
        bool isswap=false;
        cout<< "outer loop";
        for(int j=0;j<n-i-1;j++){
            cout<<"inner loop";
            if(arr[j]<arr[j+1]){   //ASCEDNING SORTING FOR DECENDING if(arr[j]<arr[j+1]) sign change only oppo..
                swap(arr[j],arr[j+1]);
                isswap = true ;

            }
        }
        if(!isswap){
            //arry already sorted
            return;
        }
    }
    print(arr,n);
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    bubble(arr,n);
    cout<< endl;
    return 0;


}
