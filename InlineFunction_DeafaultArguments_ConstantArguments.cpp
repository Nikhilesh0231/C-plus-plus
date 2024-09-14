#include <iostream>
using namespace std;
inline int product(int a, int b) // inline Fuction is used When we are calling function reapeatdly so it not efficient very large function because it may take more memory
// inline fuction is not used with static variables
{
    return a * b;
}
float moneyRecived(int currentmoney, float factor=1.04)// here factor has deafault argument and deafault argument written at last Or at extream right
{
return currentmoney * factor;
}
int strlen(const char*p){// using const will make it constant argument and it can changed by the function in any condition

}
int main()
{
  //  int a, b;
   // cout << "Enter The Value Of a And b : ";
   // cin >> a >> b;
   // cout << "The Product Of a And b Is : " << product(a, b);
    int money=100000;
    cout<<" For VIP if you have "<<money<<"Rs in your bank account,you will recieve"<<moneyRecived(money)<<"Rs after 1 year";
    return 0;
}