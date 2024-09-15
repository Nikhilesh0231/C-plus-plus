#include<iostream>
using namespace std;

class Simple{
 int data1,data2 ;
 public:
     Simple(int a,int b = 9){
         data1 = a;
         data2 = b;
     }
    void printData();
};
void Simple :: printData(){
  cout << "The Value of data1 and data2 is "<<data1<<"and "<<data2<<endl;
}

int main() {

  Simple s(1,4);
  s.printData();
  Simple s1(2);//It use the value of data2 from default argument
  s1.printData();


  return 0;
}

// class Add{
//   int num1,num2;
//   public:
//   Add(int a,int b = 3){
//     num1 = a;
//     num2 = b;
//   }
//   void printResult(){
//     int num3 = num1+num2;
//     cout << "The Sum is "<<num3<<endl;
//   }
// };
// int main() {
//   Add a(4,5);
//   a.printResult();
//   Add b(5);
//   b.printResult();
//   return 0;
// }