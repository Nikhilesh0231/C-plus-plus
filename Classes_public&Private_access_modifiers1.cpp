#include<iostream>
using namespace std;

class Employee{
     private:
     int a,b,c;
     public:
     int d,e;
     void setData(int a1,int b1,int c1);//declaration
     void getData(){
      cout<<"The value of a is "<<a<<endl;
      cout<<"The value of b is "<<b<<endl;
      cout<<"The value of c is "<<c<<endl;
      cout<<"The value of d is "<<d<<endl;      
      cout<<"The value of e is "<<e<<endl;      
     }
};
void Employee :: setData(int a1,int b1,int c1){
  a=a1;b=b1;c=c1;
}
int main() {
  Employee Nikhilesh;
  Nikhilesh.setData(2,3,4);
// if we try to modify the value of a directly here then we get an error because a has private so can be changed only the function of the class
  // Nikhilesh.a=87;
  Nikhilesh.d=87;
  Nikhilesh.e=987;
  Nikhilesh.getData();
  

  return 0;
}