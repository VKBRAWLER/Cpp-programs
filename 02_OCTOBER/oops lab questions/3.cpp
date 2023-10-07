#include<iostream>
#include<string>
using namespace std;
class MonoSpace {
    string sen;
    public:
    MonoSpace() {
        cout << "Typical Input: ";
        getline(cin, sen);
    }
    void convert();
    void output() {
        cout << "Typical Output: " << this->sen;
    }
};
void MonoSpace::convert() {
    string new_str = " ";
    string space = " ";
    int i, j, repeat;
    for (i = 0; i < this->sen.length() - 1; i++) {
        if (this->sen[i] == '0' || this->sen[i] == ' ') {
            continue;
        }
        repeat = 0;
        for (j = i+1; j < this->sen.length(); j++) {
            if (this->sen[i] == this->sen[j]) {
                this->sen[j] = '0';
                repeat = 1;
            }
        }
        if (!repeat) {
            new_str += this->sen[i] + space;
            // new_str += this->sen[i]; new_str += ' ';
        }
    }
    this->sen = new_str;
}
int main() {
    MonoSpace s;
    s.convert();
    s.output();
}