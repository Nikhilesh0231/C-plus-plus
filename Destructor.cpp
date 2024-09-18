#include<iostream>
using namespace std;

int count = 0;
class num{
  public:
   num(){
    count++;
    cout<<"This is the time when constructor is called for an object number"<<count<<endl;
   }
   ~num(){// destructor
    cout<<"This is the time when my destructor is called for object number"<<count<<endl;
    count--;
   }
};
int main() {
  cout<<"we are inside our main function."<<endl;
  cout<<"Creating first Object n1"<<endl;
  num n1;
  {
    cout<<"Entering this block"<<endl;
    cout<<"Creating two more Objects"<<endl;
    num n2,n3;
    cout<<"Exiting this block"<<endl;
  }
  cout<<"Back to main"<<endl;
  

  return 0;
}

//output to understand the flow of code
/*we are inside our main function.
Creating first Object n1
This is the time when constructor is called for an object number1
Entering this block
Creating two more Objects
This is the time when constructor is called for an object number2  
This is the time when constructor is called for an object number3
Exiting this block
This is the time when my destructor is called for object number3
This is the time when my destructor is called for object number2
Back to main
This is the time when my destructor is called for object number1
*/