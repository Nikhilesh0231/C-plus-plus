#include<iostream>
using namespace std;

class BankDeposit{
  int principal,years;
  float interestRate,returnValue;


  public:
    BankDeposit(){};
    BankDeposit(int p,int y,float r);//r can be value like 0.04 means 4%
    BankDeposit(int p,int y,int r);//r can be value like 12 13 18or something integer value
    void show();
};
BankDeposit::BankDeposit(int p , int y, float r){
  principal = p;
  years = y;
  interestRate = r;
  returnValue = principal;
  for (int i = 0; i < y; i++)
  {
    returnValue = returnValue*(1+interestRate);
  }  
}
BankDeposit::BankDeposit(int p , int y, int r){
  principal = p;
  years = y;
  interestRate = float(r)/100;
  returnValue = principal;
  for (int i = 0; i < y; i++)
  {
    returnValue = returnValue*(1+interestRate);
  }  
}
void BankDeposit::show(){
  cout<<endl<<"principal amount was "<<principal<<" return value after "<<years
  <<" years is "<<returnValue<<endl;
}
int main() {
 BankDeposit bd1,bd2,bd3;
 int p ,y ;
 float r;
 int R;
  bd3.show();
 cout<<"Enter the value of p y and r"<<endl;
 cin>>p>>y>>r;
 bd1 = BankDeposit(p,y,r);
 bd1.show();
  cout<<"Enter the value of p y and R"<<endl;
 cin>>p>>y>>R;
 bd2 = BankDeposit(p,y,r);
 bd2.show();
 
  return 0;
}