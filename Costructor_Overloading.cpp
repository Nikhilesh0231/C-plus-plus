#include<iostream>
using namespace std;

class Complex{
  int a, b ;
  public:
  Complex(int x, int y){
    a = x ;
    b = y ;
    }
    Complex(int x){//--> Construcor Overloading
      a = x ;
      b = 0 ;
    }
    Complex(){
      a = 0 ;
      b = 0 ;
    }
    void display(){
      cout << a << " + "<< b << "i" << endl ;
      } 
};

int main() {
  Complex c1(4,5);
  c1.display();
  Complex c2(6);
  c2.display();
  Complex c3;
  c3.display();
  

  return 0;
}