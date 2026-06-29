#include <iostream>
using namespace std;

enum TrafficLight
{
    Red,
    Yellow,
    Green
};

int main()
{
    TrafficLight signal;

    signal = Green;

    cout << signal;

    return 0;
}