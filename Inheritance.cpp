#include<iostream>
using namespace std;

//Base Class
class Employee{
  public:
  int id;
  float salary;
  Employee(int inpId){
    id = inpId;
    salary = 24;
  }
  Employee(){}
};
//Derived Class
class Programmer : Employee{
  public:   
  Programmer(int inpId){
    id =inpId;
   }
  int languageCode = 9;
  void getData(){
    cout<<"ID: "<<id<<endl;
  }
};
int main() {  
  Employee veeru(1),raj(2);
  cout << "Veeru's salary is " << veeru.salary << endl;
  cout << "Raj's salary is " << raj.salary << endl;
  Programmer skillfull(10);
  cout<<skillfull.languageCode<<endl;
  // cout<<skillfull.id<<endl;//we get an error because id is public member for Employee but bydeafult it privately inherited so public member of Parent class becomes private member for derived class.
  skillfull.getData();
  return 0;
}