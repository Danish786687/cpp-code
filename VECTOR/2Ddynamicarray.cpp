#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<< "enetr rows: ";
    cin >> row;
    cout<< "enter column : ";
    cin >> cols;

    int* *mat = new int*[row];    //imporatnt 3 lines

    for(int i=0 ; i<row; i++){
        mat[i]= new int[cols];
    }

    //data store
    int x=1;
    for(int i=0;i<row;i++){
        for(int j=0; j<cols;j++){
            mat[i][j]=x;
            cout<< mat[i][j] << " ";
            x++;
        }
        cout<< endl;
    }
    cout<< mat[2][2] << endl;
    cout<< *(*(mat +2)+2) << endl;

    return 0;
}
