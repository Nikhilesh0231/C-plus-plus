#include<iostream>
using namespace std;
int glo = 6;
void sum(){
 int a; 
 cout<<glo;
}
int main(){
  int glo = 9;
  int a= 4;
  int b= 5;
  sum();
  float pi = 3.14;
  cout<<"Here the value of a is "<<a<<" and The value of b is "<<b;
  cout<<"\n"<<pi;
  cout<<glo;
  return 0;
}