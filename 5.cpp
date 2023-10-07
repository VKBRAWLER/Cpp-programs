// Implement a C++ program to find the non-repeating characters in string. Typical Input: graphic era university Typical Output: c g h n p s t u v y
#include <iostream>
#include <string>
#include <unordered_map>
int main() {
    std::string input = "graphic era university";
    std::unordered_map<char, int> charCount;

    // Count the frequency of each character in the string
    for (char c : input) {
        charCount[c]++;
    }

    // Print the non-repeating characters
    for (char c : input) {
        if (charCount[c] == 1) {
            std::cout << c << " ";
        }
    }
    return 0;
}