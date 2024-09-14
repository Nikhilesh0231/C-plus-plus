#include<iostream>
#include<iomanip>
using namespace std;

int main( )
{
  int a =34;
  cout<<"The value of a is "<<a<<endl;
//here we can update the value of a 
  a = 45;
  cout<<"The value of a is "<<a<<endl;

  /***************************Constant Variables******************************/

  const int c = 23;
  cout<<"The value of c is "<<c<<endl;
  //here we can't update the value of c
  // c = 45; //this will give an error

  /***************************Manipulators*****************************endl,setw*/
  int d =34,e=312,f=4121;
  cout<<"The value of d without setw is : "<<d<<endl;
  cout<<"The value of e without setw is : "<<e<<endl;
  cout<<"The value of f without setw is : "<<f<<endl;
  cout<<"The value of d with setw is : "<<setw(5)<<d<<endl;
  cout<<"The value of e with setw is : "<<setw(5)<<e<<endl;
  cout<<"The value of f with setw is : "<<setw(5)<<f<<endl;
  

  /***************************Operator Precidence******************************/
  int x = 5,y = 3,z = 2;
  cout<<"The value of x+y+z is : "<<x+y+z<<endl;
  cout<<"The value of x+y*z is : "<<x+y*z<<endl;
  cout<<"The value of x+(y*z) is : "<<x+(y*z)<<endl;
  



  return 0;
}
