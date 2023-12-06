#include<iostream>
using namespace std;
class Product {
  char Product_Id;
  string Product_Name;
  int Total_sale;
  char Product_Grade;
  int position;
  Product* next;
  public:
  static Product* front;
  static Product* rear;
  static int count;
  Product () {
    if (count >= 5) { cout << "Stack Overflow" << endl; return; }
    if (front) { front->next = this; }
    front = this;
    if (!rear) { rear = this;}
    count++;
    this->position = count;
    this->Insert();
   }
  void Insert () {
    cout << "Enter Product ID ";
    cin >> Product_Id;
    // cout << "Enter Product Name ";
    // cin >> Product_Name;
    // cout << "Enter Total Sale ";
    // cin >> Total_sale;
    // cout << "Enter Product Grade ";
    // cin >> Product_Grade;
    next = NULL;
    cout << "count: " << count << " front: " << front << " rear: " << rear << endl;
  }
  static void Delete () {
    if (!realcount()) { cout << "Queue Underflow" << endl; return; }
    cout << "Item " << rear->Product_Id << " poped out " << endl;
    rear = rear->next;
  }
  static int realcount() {
    int i = 0;
    Product* p = rear;
    while (p != NULL) {
      i++;
      p = p->next;
    }
    return i;
  }
  static void dis() {
    Product* p = rear;
    while (p != NULL) {
      cout << " " << p->Product_Id << " ->";
      p = p->next;
    }
    cout << " NULL" << endl;
  }
};
void enqueue() {
  Product* newProduct = new Product();
}
Product* Product::front;
Product* Product::rear;
int Product::count = 0;
int main() {
  int choice;
  Product* p;
  while (1) {
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
      enqueue();
      break;
    case 2:
      Product::dis();
      break;
    default:
      exit(1);
      break;
    }
  }
}
