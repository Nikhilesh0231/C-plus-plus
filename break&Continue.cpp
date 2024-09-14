#include<iostream>

using namespace std;
int main() {
  //break
  for (int i = 0; i < 5; i++)
  {
    cout<<"break"<<endl;
    cout<<i<<endl;
    if(i==2){
    break;
    }
  }
  //continue
  for (int i = 0; i < 5; i++)
  {
    cout<<"continue"<<endl;

    if(i==2){
    continue;
    }
    cout<<i<<endl;
  }
  cout<<"Out of the loop"<<endl;
  
  return 0;
}