#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4};
    cout<<"vector size : " << vec.size() <<endl;
    cout<< "vector capacity : " << vec.capacity() << endl;

    //addding eleemnt in exisitng vector
    vec.push_back(4);
    cout<< "vector size : " << vec.size() << endl;
    cout << "vector capacity : " << vec.capacity() << endl;

    //deleting an element from the vector

    vec.pop_back();
    cout<< "vector size : " <<vec.size() << endl;
    cout<< "vector capacity : " <<vec.capacity() << endl;



}