#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count; // Now this is static varible //and when we declare any variable as static then we dont need to intailize with 0 because by default its intial value will be 0//and we want to intaialize with some other value then we can intailize it out of the class because here if intialize it then we get the error.

public:
  void setData(void)
  {
    cout << "Enter the Id : ";
    cin >> id;
    count++; // Incrementing the count variable
  }
  void getData(void)
  {
    cout << "Your Employee Id id : " << id << "and this employee number is : " << count << endl;
  }
  static void getCount(void)
  {
    cout << "The Value of count is : " << count << endl;
  }
};
int Employee :: count = 1000;
// int Employee ::count; // here we are declare it because memory is not dependent on object its memory will be saved as Class memory //its takes memory only once and its gets updated

int main()
{
  Employee Nikhilesh, Ripunjay, Ashrut;
  // count is the static data members of the class employee
  // Nikhilesh.id = 1;
  // Nikhilesh.count = 1;// We can not do so because id dand count are private members.
  Nikhilesh.setData();
  Nikhilesh.getData();

  Employee::getCount();

  Ripunjay.setData();
  Ripunjay.getData();

  Employee::getCount();

  Ashrut.setData();
  Ashrut.getData();

  Employee::getCount();

  return 0;
}