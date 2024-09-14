#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The Value Of a Is " << a << endl;
        cout << "The Value Of b Is " << b << endl;
        cout << "The Value Of c Is " << c << endl;
        cout << "The Value Of d Is " << d << endl;
        cout << "The Value Of e Is " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee Veeru;
    //Veeru.a = 43;// This can not done because a has private access so value can only intialized in a function
    Veeru.d = 34;
    Veeru.e = 45;
    Veeru.setData(1, 2, 3);
    Veeru.getData();
    return 0;
}