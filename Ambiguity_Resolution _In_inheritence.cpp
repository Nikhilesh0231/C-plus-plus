#include<iostream>
using namespace std;

class Base1{
  public:
    void greet(){
      cout << "How are you ?" << endl;
    }

};
class Base2 {
  public:
    void greet(){
      cout << "Kaise ho ?" << endl;
    }

};
class Derived : public Base1, public Base2{
  int a;
  public:
  void greet(){
    Base1::greet();
  }

};

class B{
  public:
   void say(){
    cout << "Hello world" << endl;
   }
};
class D : public B{
  public:
  void say(){
    cout << "Hello Beautiful world" << endl;
  }
};
int main() {

  // Base1 base1obj;
  // Base2 base2obj;

  // base1obj.greet();
  // base2obj.greet();

  // Derived d;
  // d.greet();//This will throw an error because member greet is ambiguos
  // d.Base1::greet(); // Accessing Base1's greet() using scope resolution operator
  // d.Base2::greet(); // Accessing Base2's greet() using scope resolution operator// Either we cann resolve like ambiguity like this or we can do the same in in greet function in derived class
//Now d.greet(); work for greet function in Base1 class because we can specify in the derived class
  // d.greet();

  B b;
  D d;
  b.say();
  d.say();//here the function say() in D class overwrites the function in base class B



  return 0;
}