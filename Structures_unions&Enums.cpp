#include<iostream>

using namespace std;

struct employee
{
  int empId;
  float empSalary;
  char empFavChar;
};
typedef struct employeeCar
{
  int empCId;
  float empCSalary;
  char empCFavChar;
}ec;

union money
{
  int rice;
  char car;
  float pounds;

};

enum captain {happy,raj,sandeep,sonu};


int main() {
  struct employee Nikhilesh;
  ec veeru;
  veeru.empCId = 123;
  Nikhilesh.empId = 57000887;
  Nikhilesh.empSalary = 120000.89;
  Nikhilesh.empFavChar = 'N';
  cout << "Employee ID: " << Nikhilesh.empId << endl;
  cout << "Employee Salary: " << Nikhilesh.empSalary << endl;
  cout << "Employee's favourite character: " << Nikhilesh.empFavChar <<endl;

  cout<<"EmployeeCar id : "<<veeru.empCId<<endl;

  union money m1;
  m1.rice = 1000;
  m1.car= 'c';
  cout<<"rice: "<<m1.rice<<endl;//here onlu if we intializre the value of rice then it gives the correct value but as we have intialized the value of car then it return the some garbage value 
  cout<<"car: "<<m1.car<<endl;//it returns the correct value 

  captain cap = raj;
  cout<<"captain: "<<cap<<endl;
  
  return 0;
}