#include<iostream>
using namespace std;
/*
case1:--
class B :public A{
//order of execution of contructor -> 
//first A() then B()
};
case2:--
classA:public B ,public C{
//Order of execution of constructor ->
//first B() then C() then A()
}
case3:--
class A : public B ,virtual public C{
//Order of execution of constructor ->
//first C() then B() then A()
}
*/
class Base1{
  int data1;
  public:
  Base1(int i){
    data1 = i;
    cout<<"Base1 Class constructor called"<<endl;
  }
  void printData(void){
    cout<<"The Value of Data 1 is : "<<data1<<endl;
  }
};
class Base2{
  int data2;
  public:
  Base2(int i){
    data2 = i;
    cout<<"Base2 Class constructor called"<<endl;
  }
  void printData(void){
    cout<<"The Value of Data 2 is : "<<data2<<endl;
  }
};
class Derived :public Base1 , public Base2{
  int derived1,derived2;
  public:
  Derived(int a,int b,int c,int d):Base1(a),Base2(b){
    derived1 = c;
    derived2 = d;
    cout<<"Derived Class constructor called"<<endl;
  }
  void printData(void){
    Base1::printData();
    Base2::printData();
    cout<<"The value of derived 1 data : "<<derived1<<endl<<"The Value of derived 2 data : "<<derived2<<endl;
  }

};
int main() {
  Derived d(1,2,3,4);
  d.printData();
  return 0;
} 