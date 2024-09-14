#include<iostream>
using namespace std;
class c2;
class c1{
    int Val1;
    public:
      void inData(int a ){
        Val1  = a;
      }
    void display(void){
      cout<<Val1<<endl;
    }
  friend void exchange(c1 &,c2 &);
};

class c2{
    int Val2;
    public:
      void inData(int a ){
        Val2  = a;
      }
    void display(void){
      cout<<Val2<<endl;
    }
  friend void exchange(c1 &,c2 &);

};
void exchange(c1 &x, c2 &y){
  int temp = x.Val1;
  x.Val1 = y.Val2;
  y.Val2 = temp;
}

int main() {
   c1 oc1;
   c2 oc2;
   oc1.inData(34);
   oc2.inData(54);
   exchange(oc1,oc2);

   cout<<"The value of c1 after exchanging becomes : ";
   oc1.display();                      

   cout<<"The value of c2 after exchanging becomes : ";
   oc2.display();                      
  

  return 0;
}