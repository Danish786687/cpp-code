// #include<iostream>
// using namespace std;

// void oddeven(int num){
//     if(!(num & 1)){
//         cout<< "even number \n";
//     }
//     else{
//         cout<< "odd number\n ";
//     }
// }

// int main(){
//     oddeven(5);
//     oddeven(70);

// }

#include<iostream>
using namespace std;

// void evenodd(int num){
//     if(!(num&1)){     
//         cout<< "even number" << endl;
//     }
//     else{
//         cout << "odd number" << endl ;
//     }
// }

void evenodd(int num){
    if(num&1){     
        cout<< "odd number" << endl;
    }
    else{
        cout << "even number" << endl ;
    }
}




int main(){
    evenodd(9);
    evenodd(8);

}










