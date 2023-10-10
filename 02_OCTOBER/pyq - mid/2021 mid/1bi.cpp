#include<iostream>
#include<string.h>
using namespace std;
class Age {
    string Name;
    int age;
    public:
    Age() {
        cout<<"Enter name: ";
        cin>>Name;
        cout<<"Enter age: ";
        cin>>age;
    }
    int getAge() {
        return this->age;
    }
    string getName() {
        return this->Name;
    }
};
int main() {
    Age** s = new Age*[2];
    for (int i = 0; i < 2; i++) {
        s[i] = new Age();
    }
    int com = s[0]->getAge() - s[1]->getAge();
    if(com>0) {
        cout<< s[0]->getName() <<" is older than "<< s[1]->getName() <<" by "<<com<<" years";
    }
    else if(com<0) {
        cout<< s[1]->getName() <<" is older than "<< s[0]->getName() <<" by "<< -com<<" years";
    }
    else {
        cout<<"Both are of same age";
    }
}