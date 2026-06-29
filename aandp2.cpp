#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12,23,45,56,67};
    int*ptr = arr;
    //   cout<< ptr++<<endl;
    //   cout<< *(ptr++);

        while(ptr < arr + 5)
    {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}