#include <iostream>
using namespace std;
class Complex
{
  int a, b;

public:
  //  Complex(void);//-->Default Constructor
  Complex(int, int); //-->Parameterized Constructor
  void printNumbers()
  {
    cout << "The number is  " << a << " + " << b << "i" << endl;
  }
};
// Complex::Complex(void){//-->This is a parameterized constructor as it takes no parameters
//   a = 0 ;
//   b = 0 ;
// }
Complex::Complex(int x, int y)
{ //-->Parameterized Constructor
  a = x;
  b = y;
}

int main()
{
  // Complex c1;//-->Deafult Constructor invoked
  // Complex c1;

  //Implicit Call
  Complex c1(3, 4); //-->Parameterized Constructor invoked
  c1.printNumbers();
  //Explicit Call
  
  Complex c2 = Complex(5, 6); //-->Parameterized Constructor invoked
  c2.printNumbers();
  return 0;
}