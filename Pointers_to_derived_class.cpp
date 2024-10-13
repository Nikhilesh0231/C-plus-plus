#include<iostream>
using namespace std;
class BaseClass{
  public:
  int var_base;
  void display(){
    cout<<"Displaying Base Class variable var_base = "<<var_base<<endl;
  }
};
class DerivedClass : public BaseClass{
  public:
  int var_derived;
  void display(){
    cout<<"Displaying Base Class variable var_base = "<<var_base<<endl;
    cout<<"Displaying Derived Class variable var_derived = "<<var_derived<<endl;
  }
};
int main() {
  BaseClass *base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;
  base_class_pointer = &obj_derived;//Pointing base class pointer to derived class object
  base_class_pointer->var_base = 34;
  base_class_pointer->display();
  base_class_pointer->var_base = 34000;
  base_class_pointer->display();//its displays only base class function as the pointer of base class and this rype of binding is called is late binding
  // base_class_pointer->var_derived = 24;// it is not accessibe because pointer is of base class.
 DerivedClass *derived_class_pointer;
 derived_class_pointer = &obj_derived;//Pointing derived classs pointer derived class object
 derived_class_pointer->var_base = 304;
 derived_class_pointer->var_derived = 24;
 derived_class_pointer->display();

  return 0;
}