#include<iostream>
using namespace std;

int main() {

    int count;
  cout<<"Enter the height of the pyramid : ";
  cin>>count;
  for (int i = 1; i <= count; i++)
  {
    for (int j = 1; j <=i; j++)
    {

      cout<<"*";
    }
    cout<<endl;
    }

  return 0;
}