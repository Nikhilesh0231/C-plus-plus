#include<iostream>

using namespace std;

//Function prototype

// type function-name(arguments)
int sum(int a,int b);

void g(void);

int main() {
  int num1,num2;//it is actual parameter
  cout<<"Enter the first value : ";
  cin>>num1;
  cout<<"Enter the second value : ";
  cin>>num2;
  cout<<"The sum is : "<<sum(num1,num2);//function call


  g();
  return 0;
}

//defining the function sum 
int sum(int a,int b){//a anb are parameters and they are formal parameter
  int sum = a+b;
  return sum;
}

void g(){
  cout<<"\n Hello, Good Morning Nikhilesh";
}  