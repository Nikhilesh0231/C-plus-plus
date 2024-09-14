#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //Changing value of a variable        
     int a = 45;
     cout<<"The value of a was : "<<a<<endl;
     a=234;
     cout<<"The value of a is : "<<a<<endl;
     // constants  in c++
     const int ads=4;// after using const keyword we can not change the value of assigned variable
     cout<<"The value of ads was :"<<ads<<endl;
    // ads=123;// it throws an error because ads assigned as constant
    // cout<<"The value of ads is:"<<ads<<endl;

// manipulators
int as=4;
cout<<setw(3)<<as<<endl;// it gives us space what which we want 


  // operators precedence
  int r= 4;
  int t= 5;
  int f=((((r*5)+t)-45)+87);
  cout<<f;
  return 0; 
}