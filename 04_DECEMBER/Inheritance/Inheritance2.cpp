#include<iostream>
using namespace std;
const int LEN=80;

class Employee{
  private:
    char name[LEN];
    unsigned int number;
  public:
    void getData()
    {
      cout<<"Enter name:"<<endl;
      cin>>name;
      cout<<"Enter number:"<<endl;
      cin>>number;
    }
    void showData()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Number: "<<number<<endl;
    }

};

class Manager:public Employee{
  private:
    char title[LEN];
    unsigned int dues;
  public:
    void getData()
    {
       Employee::getData();
       cout<<"Enter title: "<<endl;
       cin>>title;
       cout<<"Enter golf club dues: "<<endl;
       cin>>dues;
    }

    void showData(){
      Employee::showData();
      cout<<"Title: "<<title<<endl;
      cout<<"Dues: "<<dues<<endl;
    }
};

class Scientist:public Employee{
  private:
    unsigned int articles;
  public:
    void getData(){
      Employee::getData();
      cout<<"Enter no of articles:"<<endl;
      cin>>articles;
    }
    void showData(){
      Employee::showData();
      cout<<"Articles: "<<articles<<endl;
    }
};

class Laborer:public Employee{

};

int main(){
  Manager M1,M2;
  Scientist S1;
  Laborer L1;
  cout <<endl;
  cout<<"Enter data for manager 1:"<<endl;
  M1.getData();

  cout<<"Enter data for manager 2:"<<endl;
  M2.getData();

  cout<<"Enter data for scientist 1:"<<endl;
  S1.getData();

  cout<<"Enter data for laborer 1:"<<endl;
  L1.getData();

  cout<<"Data on manager 1 and manager 2:"<<endl;
  M1.showData();
  M2.showData();

  cout<<"Data on scientist 1:"<<endl;
  S1.showData();

  cout<<"Data on laborer:"<<endl;
  L1.showData();
  cout<<endl;
  
  return 0;
}