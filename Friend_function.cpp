#include<iostream>
using namespace std;

class complexNumber
{
  int a, b;
  public:
  void setData(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  friend complexNumber sumComplexNumber(complexNumber cn1,complexNumber cn2);
  void printNumber(){
    cout<<"Your Complex Number is "<<a<<"+"<<b<<"i"<<endl;
  }
};

complexNumber sumComplexNumber(complexNumber cn1,complexNumber cn2){
  complexNumber cn3 ;
  cn3.setData((cn1.a + cn2.a) , (cn1.b + cn2.b));
  return cn3;
}

int main() {
  complexNumber cn1, cn2,sum;
  cn1.setData(1, 4);
  cn1.printNumber();
  cn2.setData(5, 8);
  cn2.printNumber();

  sum = sumComplexNumber(cn1,cn2);
  sum.printNumber();
  

  return 0;
}