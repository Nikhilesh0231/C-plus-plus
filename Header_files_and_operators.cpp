//There are two types of header files 
//1.System header files : It comes with compiler
#include <iostream>
//2.User defined header files : It is written by the Programmer 
#include"this.h"//This will produce a errror until we create a file with same in the directory//like we are including any file then will exist in the current directory.

// for the reference of header files search the google with C++ Standard libraries .
using namespace std;

// int main()
// {
//   cout<<"This is hello world programme"<<endl;//endl directs us to a new line.  

//   return 0;
// }


//Operators in C++
int main()
{
  int a =4, b=5;
  cout<<"Following are the types of Operators in C++."<<endl;//endl directs us to a new line.  
  //Airthematic Operators.
  cout<<"The Value of a + b is : "<<a+b<<endl;   
  cout<<"The Value of a - b is : "<<a-b<<endl;   
  cout<<"The Value of a * b is : "<<a*b<<endl;   
  cout<<"The Value of a / b is : "<<a/b<<endl;   
  cout<<"The Value of a % b is : "<<a%b<<endl;   
  cout<<"The Value of a++ is : "<<a++<<endl;   
  cout<<"The Value of a-- is : "<<a--<<endl;   
  cout<<"The Value of ++a is : "<<++a<<endl;   
  cout<<"The Value of --a is : "<<--a<<endl;   

  //Assignment Operators.--> used to asign values to variables.
    // int a = 3 , b = 66;
    // char H1 = 'a';

  //Comparison Operators  

   cout<<"The value of a==b is : "<<(a==b)<<endl; 
   cout<<"The value of a!=b is : "<<(a!=b)<<endl; 
   cout<<"The value of a<b is : "<<(a<b)<<endl; 
   cout<<"The value of a>b is : "<<(a>b)<<endl; 
   cout<<"The value of a<=b is : "<<(a<=b)<<endl; 
   cout<<"The value of a>=b is : "<<(a>=b)<<endl; 

   //Logical Operators 
   cout<<"The value of a==b && a<b : "<<((a==b)&&(a<b))<<endl; 
   cout<<"The value of a==b || a<b : "<<((a==b)||(a<b))<<endl; 
  return 0;
}
 