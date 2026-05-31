#include<iostream>
using namespace std;

int main()
{
    int choice;

    cout<<"1. Pizza"<<endl;
    cout<<"2. Burger"<<endl;
    cout<<"3. Momos"<<endl;

    cin>>choice;

    switch(choice)
    {
    case 1:
  cout<<"Pizza Selected";
    break;

        case 2:
            cout<<"Burger Selected";
            break;

        case 3:
            cout<<"Momos Selected";
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}