#include<iostream>
using namespace std;

class printMsg{
  private:
      void print(void);
  public:
    void display(void);
};
void printMsg :: print(void){
  cout<<"This is nesting"<<endl;
}
void printMsg :: display(void){
  print();
}

int main() {

  printMsg m1;
  m1.display();
  
  return 0;
}