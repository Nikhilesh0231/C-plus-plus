#include<iostream>
using namespace std;
class Number{
  int num;
  public:
  Number(){
    num=0;
  }
  Number(int n)
  {
    num = n;
  }
  //when no copy constructor found , compiler supplies its own copy constructor
  Number(Number &obj){
    cout<<"Copy Constructor called!!!!!!!!!"<<endl;
    num = obj.num;
  }
  void display(){
    cout<<"The Number for this object is : "<<num<<endl;
  }



};
int main() {
  Number x,y,z(45),z2;
  x.display();
  y.display();
  z.display();

  Number z1(z);//Copy constructor invoked here
  z1.display();

  z2 =z;//Copy constructor not called
  z2.display();
  Number z3 = z;//Copy constructor invoked here
  z3.display();

  return 0;
}