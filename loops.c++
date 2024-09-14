#include<iostream>
using namespace std;
int main(){
/* ************************************** forloop ********************************** */
   for (int i = 1; i <= 10; i++)
   {
    cout<<i<<endl;
   }
   
/* ************************************** whileloop ********************************** */
  int i = 1;
  while(i<=10){
    cout<<i<<". "<<"Hello,Nikhilesh Tiwari"<<endl;
    i++;
  }

/* ************************************** Do whileloop ********************************** */
int j = 1;
do{
  cout<<"This is do while loop"<<endl;
  j++;
}while (j<11);


  return 0;
}