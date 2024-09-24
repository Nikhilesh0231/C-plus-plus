#include <iostream>
using namespace std;
class Base
{
protected:
  int a;

private:
  int b;
};
/*
For a protected member:
                      Public derivation  Prvate derivation Protected derivation
  1. private member   Not inherited      Not inherited     Not Inherited
  2. protected member Protected          private           protected
  3. public member    public             private           protected
*/
class Derived :protected Base
{ 


};
int main()
{
  Base b;
  Derived d;
  // cout<<b.a;//Not accessible since a is protected in base and derived class
  // cout<<d.a;//Not accessible
  return 0;
}