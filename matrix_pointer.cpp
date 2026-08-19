#include<iostream>
using namespace std;
 
int main(){
    int mat[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    
//     cout<< mat << endl;
//     cout << mat << " = " << &mat[0][0] << endl;
//    cout << mat + 1 <<" =" << &mat[1][0] << endl;

cout<< *(*(mat + 2)+2) << endl;  ///accessing 37 from matrix 2,2 are index of 37

for(int i=0 ; i<4; i++){
    for(int j=0 ; j<4 ; j++){        // accessing all matrix value by matrix pointer
        cout << *(*(mat +i) + j) << " " ;

    }
    cout <<endl;
}


}


