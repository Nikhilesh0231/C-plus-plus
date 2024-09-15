#include <iostream>
using namespace std;

class Complex {
  int a, b;
public:
  // Creating a constructor
  // Constructor is a Special member function with same name as of the class . it is used to initialize the objects of its class.It is automatically invoked when ever an Object is created.
  Complex(void); // contructor declaration
  void printNumber()  {
    cout << "The number is : " << a << " + " << b << "i" << endl;
  }
};
Complex::Complex(void){
  a = 0;
  b = 0;
}
int main()
{
  Complex c;
  c.printNumber();
  return 0;
}


// class Hello{
//    int a ;
//    public:
//    Hello(void);//Deafult Constructor
//    void print(){
//     cout<<"Hello"<<a<<endl;
//    }
// };
// Hello::Hello(void){
//   a = 5;}
// int main()
// {
//   Hello h1;
//   h1.print();
//   return 0;
// }

