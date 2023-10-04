// Construct a C++ program that removes a specific character from a given string and return the updated string. Typical Input: computer science is the future Typical Output: compuer science is he fuure
#include<iostream>
#include<string>
using namespace std;
class Sentence {
    public:
    string sentence;
    Sentence() {
        cout << "Enter a sentence: " << endl;
        getline(cin, sentence);
    }
    void output() {
        cout << this->sentence << endl;
    }
    string remove();
};
string Sentence::remove() {
    char c = 't';
    string new_string = "";
    int i = 0;
    for (int i = 0; i < this->sentence.length(); i++) {
        if (this->sentence[i] != c) {
            new_string += this->sentence[i];
        }
    }
    this->sentence = new_string;
}
int main() {
    Sentence STR;
    STR.remove();
    STR.output();
}