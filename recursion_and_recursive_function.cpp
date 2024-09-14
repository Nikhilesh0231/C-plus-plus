#include<iostream>
using namespace std;

int factorial(int n){
  if(n==0||n==1){
    return 1;
  }
  return n * factorial(n-1);
}
int fibonacci(int n){
  if(n==0||n==1){
    return 1;
  }
 return fibonacci(n-2)+fibonacci(n-1);
}
int main() {

  // int num;
  int terms;
  // cout<<"Enter a number to know the factorial of the number : ";
  // cin>>num;
  // cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
  cout<<"Enter a number of position to get the value in the fibonacci series : ";
  cin>>terms;
  cout<<"Value at position "<<terms<<" in the fibonacci series is : "<<fibonacci(terms);

  return 0;
}