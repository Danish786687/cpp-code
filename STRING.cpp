#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //char word[10];
    // cin >> word; //ignore whitespace

// cout << "your word was : " << word << endl;
// cout << "length : " << strlen(word) << endl;

char sentence[30];
cin.getline(sentence, 30, '*');

cout << "your word was : " << sentence[0] << endl;
cout << "length : " << strlen(sentence) << endl;
return 0;
}
