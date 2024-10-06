#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 13; i++)
  {
    for (int j = 1; j <= 13; j++)
    {
        if (i < 7){
          if(j<7){
            if(j==1)
              cout<<"*";
            else
              cout<<" "<<" ";
          }
            else if(j==7){
              cout<<" *";
            }
            else{
              if(i==1) cout<<" *";
          }
        }
      else if(i == 7){
        cout<<"* ";
      }
      else{
        if( j == 7 || j ==13) cout<<"* ";
        else if(i == 13){
          if(j<=7 || j == 13) cout<<"* ";
          else cout << " " << " ";
        }
          else cout << " " << " ";
      }
    }
    cout<<"\n";
  }
}