#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; // break will stop the for loop when if condition is matched
        }
        cout << i << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue; // continue will only stop that particular condition
        }
        cout << i << endl;
    }
    return 0;
}