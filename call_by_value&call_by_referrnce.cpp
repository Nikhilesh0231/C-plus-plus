#include<iostream>

using namespace std;

int sum(int a, int b){
  return a+ b ;
}
//this will not swap the value of a and b is 
//because here value is caled by value
void swap(int a , int b){
  int temp = a ;
  a = b;
  b = temp;
}

//Call by reference using pointer
void pointerSwap(int* a , int* b){
  int temp = *a ;
  *a = *b;
  *b = temp;
}
//Call by reference using C+ reference variables
void swapReferenceVariables(int &a , int &b){
  int temp = a ;
  a = b;
  b = temp;
}

int main() {
  int a = 5 ;
  int b = 4;
  cout<<"The sum of 4 and 5 is : "<<sum(a,b)<<endl;
  cout<<"The value of a : "<<a<<endl<<"The value of b is "<<b<<endl;
  swap(a,b);
  cout<<"The value of a : "<<a<<endl<<"The value of b is : "<<b<<endl;//a=5 b=4

//Call by reference using pointer
  pointerSwap(&a,&b);//passing the address of a and b  
  cout<<"The value of a : "<<a<<endl<<"The value of b is : "<<b<<endl;//a=4 b=5

//Call by reference using C+ reference variables
  swapReferenceVariables(a,b);
  cout<<"The value of a : "<<a<<endl<<"The value of b is : "<<b<<endl;//a=5 b=4
  return 0;
}