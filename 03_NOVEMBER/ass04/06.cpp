// WAP to swap two variables using Call by value, Call by address, and Call by Reference 
#include<iostream>
using namespace std;

// Call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by address
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping by value: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapping by value: x = " << x << ", y = " << y << endl;

    cout << "Before swapping by reference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapping by reference: x = " << x << ", y = " << y << endl;

    cout << "Before swapping by address: x = " << x << ", y = " << y << endl;
    swapByAddress(&x, &y);
    cout << "After swapping by address: x = " << x << ", y = " << y << endl;

    return 0;
}