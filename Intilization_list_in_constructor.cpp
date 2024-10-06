#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor(argument-list):initialization-section{
assignment + other code;
}
*/
class Test{
 int a;
 int b;
 public:
 Test(int x, int y):a(x), b(y){
  cout<<"Constructor executed"<<endl;
  cout<<"Value of a is : "<<a<<endl;
  cout<<"Value of b is : "<<b<<endl;
 }
};
int main() {
  Test obj(10, 20);
  return 0;
}