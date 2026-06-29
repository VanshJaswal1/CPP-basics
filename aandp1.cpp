
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};

    int *ptr = arr;

    cout<<"arr      = "<<arr<<endl;
    cout<<"ptr      = "<<ptr<<endl;

    cout<<"*arr     = "<<*arr<<endl;
    cout<<"*ptr     = "<<*ptr<<endl;

    cout<<"&arr[0]  = "<<&arr[0]<<endl;
}