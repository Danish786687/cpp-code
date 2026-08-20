#include <iostream>
#include <cstring>

using namespace std;

void toUpper(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') { //upper case
            continue;
        } else {                   //lower case
            word[i]=ch-'a'+'A';
        }
    }
}

int main() {
    char word[] = "ApnaCollege";
    
    toUpper(word, strlen(word));
    
    cout << word << endl; // Output: APNACOLLEGE
    
    return 0;
}