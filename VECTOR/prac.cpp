#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string str[], int size) {
    if (size == 0) return "";

    // Iterate through characters of the first string
    for (int i = 0; i < str[0].length(); i++) {
        char c = str[0][i];
        
        // Compare character c with the character at index i in all other strings
        for (int j = 1; j < size; j++) {
            // Stop if index i is out of bounds or characters don't match
            if (i >= str[j].length() || str[j][i] != c) {
                return str[0].substr(0, i);
            }
        }
    }
    
    return str[0];
}

int main() {
    string strs[] = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs, 3) << endl;
    return 0;
}