#include <iostream>

using namespace std;

  // inline function


//   inline int product(int a,int b){
//     return a * b;
//   }
// int main()
// {
//   int a , b;
//   cout << "Enter the value of a and b :" << endl;
//   cin >> a >> b;
//   cout << "The product of a and b is : " << product(a,b);
//   return 0;
// }


// //undersatanding static variables 
//   int product(int a,int b){
//     static int  c =0;// it executes only once in whole program
//     c= c+1;//each time the function is called value of c is incremented by 1 .and the previous value of c is retained 

//     return a * b + c;
//   }
// int main()
// {
//   int a , b;
//   cout << "Enter the value of a and b :" << endl;
//   cin >> a >> b;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   cout << "The product of a and b is : " << product(a,b)<<endl;
//   return 0;
// }

// default argument
 
// int money(int amount , int interestRate = 4){//here value stored in interestRate variable is default 
//   return amount + (amount * interestRate / 100);
// } 
// int main(){
//   int amount;
//   cout<<"Enter Your Amount : ";
//   cin>>amount;
  
//   cout<<"If you are a common person then your money after one year is :"<<money(amount)<<endl;//here interestrate is used as default value passed in the function 
//   cout<<"If you are a VIP person then your money after one year is :"<<money(amount,8)<<endl;//here default value is overridden 

//   return 0;
// }

float areaCircle(float radius , const float pi = 3.14){
  return pi*(radius*radius);
}

int main() {
  float rad;
  cout<<"Enter the radius of the circle : ";
  cin>>rad;

  cout<<"The area of the circle of with radius "<<rad<<" is :"<<areaCircle(rad)<<endl;
  

  return 0;
}