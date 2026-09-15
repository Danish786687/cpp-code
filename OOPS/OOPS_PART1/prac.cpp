#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;
public:
    string username;
    User(int id){
        this->id=id;

    }

//setter
void setpassword(string password){
    this->password=password;
}

//getter
string getpassword(){
    return password;
}

};

int main(){
    User u1(101);
    u1.username="dansih";
    u1.setpassword("abcd");

    cout<< "username : " << u1.username<<endl;
    cout<< "Password : " << u1.getpassword()<<endl;

    return 0;
}