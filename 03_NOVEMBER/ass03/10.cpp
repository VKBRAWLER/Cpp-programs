// Create a class library/lib. It should have two variables – author and title. Use string data type.
// It should have these functions:
// Constructor to assign values.
// Disp() to print details of each object.
// Findbyauthor() to find whether a given author is available in lib or not.
// Findbybook() to find whether a given book is available in lib or not.
// Create an array of 5 objects and assign values to these objects.
// Take two inputs from user – authorname and titlename.
// Check whether these books are availabe in lib or not by using findbyauthor() and findbybook() functions
#include<iostream>
using namespace std;
class lib {
  string author, title;
  public:
  lib () {
    cout << "Enter the name of the author: ";
    cin >> author;
    cout << "Enter the name of the title: ";
    cin >> title;
  }
  void Dis () {
    lib *p = this;
    for (int i = 0; i < 5; i++, p++) {
      cout << "\nAuthor: " << p->author << " Title: " << p->title << endl;
    }
  }
  void Findbybook () {
    string keybook;
    cout << "Enter the title of book: ";
    cin >> keybook;
    lib *p = this;
    for (int i = 0; i < 5; i++, p++) {
      if (p->title == keybook) {
        cout << "Author available";
        return;
      }
    }
    cout << "Author not available";
    return;
  }
  void findbyauthor () {
    string keyauthor;
    cout << "Enter the title of book: ";
    cin >> keyauthor;
    lib *p = this;
    for (int i = 0; i < 5; i++, p++) {
      if (p->author == keyauthor) {
        cout << "Book available";
        return;
      }
    }
    cout << "Book not available";
    return;
  }
};
int main () {
  lib arr[5];
  arr->Dis();
  arr->Findbybook();
  arr->findbyauthor();
}