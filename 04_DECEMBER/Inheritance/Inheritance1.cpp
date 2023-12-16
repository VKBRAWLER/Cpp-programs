#include<iostream>
#include<process.h>
using namespace std;

class Stack{
  protected:
    enum { MAX=3};
    int st[MAX];
    int top;
  public:
    Stack(){
      top=-1;
    }
    void push(int var){
      st[++top]=var;
    }
    int pop(){
      return st[top--];
    }
};
class Stack2:public Stack{
  public:
    void push(int var){
      if(top>=MAX-1){
        cout<<"Stack is full."<<endl;
      }
      Stack::push(var);
    }
    int pop(){
      if(top<0){
        cout<<"Stack is empty."<<endl;
      }
      Stack::pop();
    }
};

int main(){

  return 0;
}