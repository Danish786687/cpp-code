#include<iostream>
using namespace std;

void maxsubarraysum(int *arr, int n){
    int maxsum=INT64_MIN;    ////maxsum!=0 BECAUSE IF NEGATIVE THEN 0 IS BIG then use this...
    for(int start=0 ; start<n ; start++){
        for(int end=start ; end<n ;end++){
            int currsum=0;                     //cursum!=0 BECAUSE IF NEGATIVE THEN 0 IS BIG
            for(int i=start; i<=end; i++){
                currsum += arr[i];
            }

            cout<< currsum << ",";
            maxsum=max(maxsum,currsum);  //max function in cpp
        }
cout<< endl ;
    }

    cout<< "MAXIMUM SUBARRAYS SUM= "<< maxsum <<endl;
}


int main(){
     int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum(arr,n);
    return 0;

}