#include <iostream>
using namespace std;

class complexNumber
{
  int a, b;
  public:
  void setData(int v1, int v2)
  {
    a = v1;
    b = v2;
  }
  void setDataBySum(complexNumber o1, complexNumber o2)
  {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
  }
  void printNumber(){
    cout<<"Your Complex Number is "<<a<<"+"<<b<<"i"<<endl;
  }
};

int main()
{

  complexNumber cn1, cn2, cn3;
  cn1.setData(1, 2);
  cn1.printNumber();
  cn2.setData(3, 4);
  cn2.printNumber();

  cn3.setDataBySum(cn1,cn2);
  cn3.printNumber();
  return 0;
}