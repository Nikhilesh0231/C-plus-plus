#include<iostream>
using namespace std;
int d =  67;


int main(){

  //*************************************************built in data types ****************************************
  // int a, b, c,d=34;
  // cout<<"Enter the value of a:"<<endl;
  // cin>>a;
  // cout<<"Enter the value of b:"<<endl;
  // cin>>b;
  // c = a+b;
  // cout<<"The sum of a and b is "<<c<<endl;
  // // like if we want to print the value of any global variable then the precidence for local is more than that of global but still want the value of global variable then can use scope resolution operator ::
  // cout<<"The value of d in local scope is :"<<d<<endl;
  // cout<<"the value of d in global scope is :"<<::d;




  //*************************************************flaot double and long double literals  ****************************************

  // float d = 2.3;
  // cout<<"The value of d is "<<d<<endl;
  // cout<<"The size of 23.3 is:"<<sizeof(23.3)<<endl;//here the of flaoting point value is 8 because till we not mention that either it is float or double it may consider as double
  // cout<<"The size of d is : "<<sizeof(d)<<endl;

  // float e = 2.3f;
  // cout<<"The value of e is "<<e<<endl;
  // // cout<<"The size of e is : "<<sizeof(e)<<endl;
  // cout<<"The size of 23.3 is:"<<sizeof(23.3f)<<endl;
  // cout<<"The size of 23.3 is:"<<sizeof(23.3L)<<endl;
  // cout<<"The size of 23.3 is:"<<sizeof(23.3l)<<endl;


  //**********************************reference Variable****************************

  // float x =233;
  // float &y = x;
  // cout<<"The value of x is : "<<x<<endl;
  // cout<<"The value of y is : "<<y<<endl;


  //**********************************type casting****************************
  
  int p = 23;
  float q = 23.32;
  double r = 23.32;
  cout<<"The value of p is :"<<(float)p<<endl;
  cout<<"The value of q is :"<<(int)q<<endl;
  cout<<"The value of r is :"<<int(r)<<endl;



  return 0;


}


