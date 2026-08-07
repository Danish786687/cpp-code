// #include<iostream>
// using namespace std;
// int main(){
//     // int a=10;
//     // int *ptr=&a;  //here address of normal variable can change = 0x61ff08
//     // cout<< ptr<< endl;

//     //     int y=12;
//     //     ptr=&y;
//     //     cout<<ptr;  //here address of normal variable can change = 0x61ff04

//         int arr[5];
//         cout<<arr<<endl;
//         int y=209;
//         //arr=&y;   //array have constatnt address / An array has a fixed memory location for its elements; it cannot be made to “point” somewhere else.

//         cout<<arr

// }

#include<iostream>
using namespace std;
int main(){
    int hours[]={5,1,2,7,4};
    int n=sizeof(hours)/sizeof(int);
    int target=3;
    cout<<" the comapny wants each employee to work for at least "<< target << "hours" << endl;
    cin>> target;
    for(int i=0;i<n;i++){
        if(hours[i]>=target){
            
            //cout<<" target complete : work for = "<< target <<" hours" <<endl;
            cout<< "employee " << i << " worked for" << hours[i] << "hours and met the target" << endl;
        }
         else{
            cout<< "employee " << i << " worked for" << hours[i] << "hours and  didnot met the target"<< endl;
         }
        

    }




}