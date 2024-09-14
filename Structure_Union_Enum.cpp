#include <iostream>
using namespace std;
// Structure in C++
struct Employee
{
    int eId;
    char fav_char;
    float salary;
};
/*
typedef struct Employee
{
    int eId;
    char fav_char;
    float salary;
} ep;
*/

// Union In C++
union Money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // enum in C++
    enum Meal
    {
        BreakFast,
        Lunch,
        Dinner
    };
    Meal M = Lunch;
    cout << M << endl;

    // cout<<BreakFast<<endl;
    // cout<<Lunch<<endl;
    // cout<<Dinner<<endl;

    union Money m1;
    m1.car = 'D';
    m1.pounds = 100.0f;
    m1.rice = 5; // in this only we get correct value and in above we get garbage values it will show last
    cout << "car" << m1.car << endl;
    cout << "rice in kgs" << m1.rice << endl;
    cout << "Pounds" << m1.pounds << endl;

    struct Employee veeru;
    // ep veeru;
    veeru.eId = 1;
    veeru.fav_char = 'N';
    veeru.salary = 120000;
    cout << veeru.eId << endl;
    cout << veeru.fav_char << endl;
    cout << veeru.salary << endl;
    return 0;
}