#include<iostream>
using namespace std;
class Complex{
  int real,imaginary;
  public:
   void getData(){
    cout<<"The real part is : "<<real<<endl;
    cout<<"The imaginary part is : "<<imaginary<<endl;
   }
   void setData(int a, int b){
    real = a;
    imaginary= b;
   }
};
int main() {
  // Complex c1;
  // c1.setData(10,20);
  // c1.getData();
  // Complex *ptr = &c1;//Pointers to Object
  Complex *ptr = new Complex;//Pointers to Object.
  // (*ptr).setData(12,13);//we can also do with arrow operators
  ptr->setData(12,13);//Arrow operator//here ptr points to setData.
  // (*ptr).getData();//we can also do with arrow operators
  ptr->getData();//Arrow operator//here ptr points to getData.
  return 0;
}