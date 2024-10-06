#include<iostream>
using namespace std;

int main() {
  int count;
  cout<<"Enter the height of the pyramid : ";
  cin>>count;
  for (int i = count; i >= 1; i--)
  {
    for (int j = 1; j <=i; j++)
    {

      cout<<" ";
    }
    for(int k = 1;k<=count+1-i;k++)
      {
        cout<<" *";
      }
    cout<<endl;
  }
  return 0;
}   