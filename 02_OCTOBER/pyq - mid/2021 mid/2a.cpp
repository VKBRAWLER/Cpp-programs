#include<iostream>
using namespace std;
class C {
    int num;
    static int count;
    public:
    C(int num) {
        this->num = num;
        count++;
        this->getdata();
    }
    void getdata() {
        cout << "Num: " << num << " and this is "<< count << endl;
    }
};
int C::count;
int main() {
    C s1(22),s2(22),s3(22),s4(22);
}
