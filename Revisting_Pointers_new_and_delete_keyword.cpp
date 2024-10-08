#include<iostream>
using namespace std;

int main() {
  //basic example
  int a = 4;
  int *ptr = &a;
  cout<<"The value of ptr :"<<ptr<<endl;
  cout<<"The value of *ptr :"<<*ptr<<endl;
  cout<<"The value of a :"<<*ptr<<endl;//derfrecing the ptr

  //new keyword 
  int *ptr2 = new int(5);
  cout<<"The value at address of ptr2 is :"<<*ptr2<<endl;
  float *ptr3 = new float(5.89);
  cout<<"The value at address of ptr3 is : "<<*ptr3<<endl;
  int *arr = new int[4];
  arr[0]=23;
  arr[1]=33;
  arr[2]=43;
  arr[3]=53;
  cout<<"The value at address of arr[0] is : "<<*arr<<endl;
  cout<<"The value at address of arr[0] is : "<<arr[0]<<endl;
  cout<<"The value at address of arr[1] is : "<<*(arr+1)<<endl;
  cout<<"The value at address of arr[2] is : "<<*(arr+2)<<endl;
  cout<<"The value at address of arr[3] is : "<<*(arr+3)<<endl;

  // delete Operator/keyword
  int *ptr4 = new int(6);
  cout<<"The value at address of ptr3 is : "<<*ptr4<<endl;
  delete ptr4;
  cout<<"The value at address of ptr3 is : "<<*ptr4<<endl;//this will show some garbage value

  return 0;
}