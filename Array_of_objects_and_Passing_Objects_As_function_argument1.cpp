#include<iostream>
using namespace std;

class Employee{
  int id;int salary;
  public:
    void setId(void){
      salary=12220;
      cout<<"Enter ID of the employee : ";
      cin>>id;
    }
    void getId(void){
      cout<<"ID of the employee is : "<<id<<endl;
    }
};

int main() {

  // Employee sam,akash,karan,saumya,harsha;
  // sam.setId();
  // sam.getId();
  Employee fb[5];//here we can intialize array of objects .
   for(int i=0;i<5;i++)
  {
    fb[i].setId();
    fb[i].getId();
    }

  return 0;
}