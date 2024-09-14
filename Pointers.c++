#include<iostream>

using namespace std;
int main() {
  int a =3;
  int* b = &a;
  // & --> (address of) Operator
  cout<<"The address of a is "<<&a<<endl;
  cout<<"The address of a is "<<b<<endl;
  
  //* -- > (Value at) dereference Operator

  cout<<"The value  of b is "<<*b<<endl;


  //Pointer to pointer 

  int** c = &b;
  cout<<"The address of b is "<<&b<<endl;
  cout<<"The address of b is "<<c<<endl;
  cout<<"The value of c is "<<**c<<endl;
  return 0;
}