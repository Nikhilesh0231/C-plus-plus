/************************************************Memory Allocation for Objects*****************************************************
-->In object-oriented programming (OOP), the memory allocation for an object means it is the process to reserve the memory block in the memory of the computer for storing an object during the runtime. In object-oriented programming (OOP), objects are also known as instances. These instances represent real-world entities such as a person, a car, or a bank account. When an object is created, the memory needs to be allocated to store its data members (variables) and member functions (methods) so that these objects can be accessed and manipulated during program execution.*/

//*****************Using Array in Classes *******************//
#include <iostream>
using namespace std;

class Shop
{
  int ItemId[100];
  int ItemPrice[100];
  int counter;

public:
  void initCounter(void) { counter = 0; }
  void setPrice(void);
  void displayPrice(void);
};

void Shop ::setPrice(void)
{
  cout << "Enter Your ItemId of Item No:" << counter + 1 << endl;
  cin >> ItemId[counter];
  cout << "Enter Your ItemPrice :" << endl;
  cin >> ItemPrice[counter];
  counter++;
}

void Shop ::displayPrice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout << "The Price of Item with Id " << ItemId[i] << " is :" << ItemPrice[i] << endl;
  }
}

int main()
{
  Shop dukaan;
  dukaan.initCounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displayPrice();

  return 0;
}