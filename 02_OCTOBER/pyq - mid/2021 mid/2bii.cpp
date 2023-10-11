#include<iostream>
#include<string>
using namespace std;
int pal(string temp) {
    int i = 0, j = temp.length()-1;
    while (i < j) {
        if (temp[i] != temp[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main() {
    string sen;
    getline(cin, sen);
    int s = 0, st = 0, w = 0;
    string temp, newsen;
    for (int i = 0; i < sen[i] != '\0'; i++) {
        if (sen[i] == ' ') {
            st = 0;
            for (int j = s; j < i; j++) {
                temp[st] = sen[j];
                st++;
            }
            if (pal(temp)) {
                for (int j = s; j < i; j++) {
                    newsen[w] = sen[j];
                    w++;
                }
            }
            else {
                for (int j = s; j < i; j++) {
                    newsen[w] = '*';
                    w++;
                }
            }
            newsen[w] = ' ';
            w++;
            s = i+1;
        }
    }
    cout << newsen << endl;
}