#include<iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter constant number: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Vansh";
            break;

        case 2:
            cout << "deshu";
            break;

        case 3:
            cout << "Ayush";
            break;

        case 4:
            cout << "una wal";
            break;

        default:
            cout << "Invalid constant";
    }

    return 0;
}