#include<iostream>
using namespace std;

int main() {

    int count;
  cout<<"Enter the height of the pyramid : ";
  cin>>count;
  for (int i = count; i >= 1; i--)
  {
    for (int j = count+1-i; j >=1; j--)
    {

      cout<<" ";
    }
    for(int k = i;k>=1;k--)
    {
        cout<<"*";
    }
    cout<<endl;
    }

  return 0;
}