/*Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?//Multiple inheritence
    Q2. Which mode of Inheritance are you using?//Publicicly both simple and scientific
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?//here we directly use all the function in simple and scientific calculator in our hybrid calculator.By only Definig the inheritence.
*/
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
  int a, b;

public:
  void getDataSimple()
  {
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
  }
  void PerformOperationsSimple()
  {
    cout << "Addition of a and b is : " << a + b << endl;
    cout << "Subtraction of a and b is : " << a - b << endl;
    cout << "Multiplication of a and b is : " << a * b << endl;
    cout << "Division of a and b is : " << a / b << endl;
  }
};
class ScientificCalculator
{
  int a, b;

public:
  void getDataScientific()
  {
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
  }
  void PerformOperationsScientific()
  {
    cout << "Value of cos(a) is : " <<cos(a)<< endl;
    cout << "Value of cos(b) is : " <<cos(b)<< endl;
    cout << "Value of sin(a) is : " <<sin(a)<< endl;
    cout << "Value of sin(b) is : " <<sin(b)<< endl;
    cout << "Value of tan(a) is : " <<tan(a)<< endl;
    cout << "Value of tan(b) is : " <<tan(b)<< endl;
    cout << "Value of exp(a) is : " <<exp(a)<< endl;
  }
};
class HybridCalculator: public SimpleCalculator,public ScientificCalculator{

};
int main()
{
  // SimpleCalculator calc;
  // calc.getDataSimple();
  // calc.PerformOperationsSimple();
  // ScientificCalculator sci;
  // sci.getDataScientific();
  // sci.PerformOperationsScientific();
  HybridCalculator hybrid;
  hybrid.getDataSimple();
  hybrid.PerformOperationsSimple();
  hybrid.getDataScientific();
  hybrid.PerformOperationsScientific();
  return 0;
}