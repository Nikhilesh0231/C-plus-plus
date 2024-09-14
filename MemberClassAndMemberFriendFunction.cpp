#include<iostream>
using namespace std;

//Forward Declaration
class Complex;

class Calculator{
  public:
    int add(int a,int b){
      return (a + b);
    }
      int sumRealComplex(Complex , Complex);
      int sumCompComplex(Complex , Complex);

};

class Complex{
  int a,b;

  //individually declaring function as friend
  // friend int Calculator::sumRealComplex(Complex o1,Complex o2);
  // friend int Calculator::sumCompComplex(Complex o1,Complex o2);

  //Aliter : Declaring entire calculator class as friend
  friend class Calculator;
  public: 
    void setNumber(int n1, int n2){
      a=n1;
      b=n2;
    }
    void printNumber(){
      cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
    int Calculator :: sumRealComplex(Complex o1, Complex o2){
      return (o1.a + o2.a);
    }
    int Calculator :: sumCompComplex(Complex o1, Complex o2){
      return (o1.b + o2.b);
    }

int main() {
  Complex o1,o2;
  o1.setNumber(3,4);
  o2.setNumber(5,6);
  Calculator c1; 

   int res = c1.sumRealComplex(o1,o2);
   cout<<res;

   int res1 = c1.sumCompComplex(o1,o2);
   cout<<res1;

  return 0;
}