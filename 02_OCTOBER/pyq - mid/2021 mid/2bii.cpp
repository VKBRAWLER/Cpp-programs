#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPalindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
} 

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    istringstream iss(input);
    string word;
    string output = "";
    while (iss >> word) {
        if (isPalindrome(word)) {
            output += string(word.length(), '*') + " ";
        } else {
            output += word + " ";
        }
    }

    cout << "Modified string: " << output << endl;

    return 0;
}