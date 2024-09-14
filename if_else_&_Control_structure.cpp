#include <iostream>
using namespace std;
int main()
{
  // cout<<"This is Nikhilesh Tiwari"<<endl;

  // int age;
  // cout<<"Enter your age : ";
  // cin>>age;

  // If statement

  // if(age>=18){
  //   cout<<"You are eligible to vote"<<endl;
  // }

  // if else statement

  // if(age>=18){
  //   cout<<"You are eligible to vote"<<endl;
  // }
  // else{
  //   cout<<"You are not eligible to vote"<<endl;
  // }

  // if else if else Ladder

  // int marks;
  // cout << "Enter your marks : ";
  // cin >> marks;
  // if (marks >= 90)
  // {
  //   cout << "Grade A" << endl;
  // }
  // else if (marks >= 80)
  // {
  //   cout << "Grade B" << endl;
  // }
  // else if (marks >= 70)
  // {
  //   cout << "Grade C" << endl;
  // }
  // else if (marks >= 60)
  // {
  //   cout << "Grade D" << endl;
  // }
  // else
  // {
  //   cout << "Grade F" << endl;
  // }

  // switch case

  int age;
  cout << "Enter your age : ";
  cin >> age;
  switch (age)
  {
  case 18:
    cout << "Your age is 18" << endl;
    break;
  case 60:
    cout << "Your age is 60"<< endl;
    break;
  case 23:
    cout << "Your age is 23" << endl;
    break;

  default:
    cout << "Invalid age number" << endl;
    break;
  }

  return 0;
}
