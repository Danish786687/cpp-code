#include<iostream>
using namespace std;



class Example{
public:
    Example(){
        cout<< "constacutor\n";
    }

    ~Example(){
            cout<< "destrcuttor\n";
      
    }
};

int main(){
    int a=0;
    if(a==0){
        static Example eg1;
    }

    cout<< "codee ending...\n";
    return 0;

}