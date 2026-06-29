#include <iostream>
using namespace std;

union Data
{
    int number;
    float marks;
};

int main()
{
    Data d1;

    d1.number = 100;
    cout << d1.number << endl;

    d1.marks = 95.5;
    cout << d1.marks << endl;

    cout << d1.number << endl;

    return 0;
}