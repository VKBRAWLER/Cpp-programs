#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        int dd = 0, base = columnNumber, left = columnNumber, divider = 0, current;

        while (base > 0) {
            dd++;
            base -= pow(26,dd);
        }
        for (int i = dd; i > 0; i--) {
            base = pow(26,(dd-1));
            left = left - base;
            current = (columnNumber % 26 == 0) ? 26 : columnNumber % 26;
        }
        
        // int i = 1, current = (columnNumber % 26== 0) ? 26 : columnNumber % 26;
        // while (columnNumber != 0) {
        //     if (columnNumber % 26 >= 26)
        //     s = 'Z' + s;
        //     columnNumber -= 26;
        //     columnNumber = (columnNumber / 26);
        //     else s = (char) (current + 'A' - 1);
        //     columnNumber = columnNumber - columnNumber;
        // }
        // return s;    
    }
};
int main() {
    Solution Solution;
    cout << Solution.convertToTitle(18280);
    return 0;
}