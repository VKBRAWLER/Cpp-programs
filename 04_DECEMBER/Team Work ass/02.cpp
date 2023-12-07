// Let A and B be two structures of type Linked List. Write a ‘C ’ program to create a new Linked List ‘S’ that contains elements alternately from A and B beginning with the first element of A. If you run out of elements in one of the lists, then append the remaining.
#include<iostream>
using namespace std;
typedef struct LinkedList {
  int data;
  struct LinkedList* next;
} LL;
LL* L1 = nullptr;
LL* L2 = nullptr;
LL* L3 = nullptr;
void Insert(LL** L) {
  // cout << "Func called" << endl;
  LL* newLL = (LL*) malloc(sizeof(LL*));
  cout << "Enter the data: ";
  fflush(stdin);
  cin >> newLL->data;
  newLL->next = NULL;
  // cout << "Memory Allocated" << endl;
  if (*L == NULL) { *L = newLL;   cout << "Func called";
}
  else {
    LL *p = *L;
    while (p->next != NULL) {
      p->next;
    }
    p->next = newLL;
  }
}
void Display(LL** L) {
  LL *p = *L;
  while(p != NULL) {
    cout << " " << p->data << " ->";
    p = p->next;
  }
  cout << " NULL";
}
int main() {
  int Ll1, Ll2;
  cout << "Enter the length of first linked list: ";
  cin >> Ll1;
  for (int i = 0; i < Ll1; i++) {
    Insert(&L1);
  }
  Display(&L1);
}