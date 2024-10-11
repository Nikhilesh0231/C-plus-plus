#include<iostream>
using namespace std;
class A{
  int a;
  public:
    void setData(int a){
      // a = a;//in this case compiler gets confused and sets some garbage value.
      this->a = a;//this keyword is used to refer to the current object. 
    }
    void getData(){
      cout<<"The value of a is "<<a<<endl;
    }
};
int main() {
  A a;
  a.setData(10);
  a.getData();
  return 0;
}