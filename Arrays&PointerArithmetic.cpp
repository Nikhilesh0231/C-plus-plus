#include<iostream>

using namespace std;
int main() {
  int marks[4];
  // cout<<sizeof(marks)/sizeof(*marks);//this is logic for finding the lenght of array
  marks[0]=23;
  marks[1]=45;
  marks[2]=67;
  marks[3]=89;
  int length = (sizeof(marks)/sizeof(*marks));
  for (int i = 0; i < length; i++)
  {
    cout<<marks[i]<<endl;
  }
  int mathmarks[4] = {34,32,37,98};
  int length1 = (sizeof(mathmarks)/sizeof(*mathmarks));
    for (int i = 0; i < length1; i++)
  {
    cout<<mathmarks[i]<<endl;
  }
  //You can change the value of an array 
  mathmarks[3]=22;
  cout<<mathmarks[3]<<endl;
  // pointer and arrays

   int* p = marks;
   cout<<*p<<endl;
   cout<<*(p++);
   cout<<*p<<endl;
  //  cout<<"The value of marks[0] is:"<<*p<<endl;
  //  cout<<"The value of marks[1] is:"<<*(p+1)<<endl;
  //  cout<<"The value of marks[2] is:"<<*(p+2)<<endl;
  //  cout<<"The value of marks[3] is:"<<*(p+3)<<endl;
  

  return 0;


}