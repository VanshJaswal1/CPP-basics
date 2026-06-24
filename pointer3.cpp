#include <iostream>
using namespace std;

void changeValue(int *p)
{
    *p = 100;
}

void swapNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // 1. Basic Pointer
    int x = 10;

    int *ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer stores: " << ptr << endl;
    cout << "Dereference: " << *ptr << endl;

    cout << "\n------------------\n";

    // 2. Modifying value using pointer
    *ptr = 50;

    cout << "New x = " << x << endl;

    cout << "\n------------------\n";

    // 3. Pointer with array
    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    cout << "Array elements using pointer:\n";

    for(int i=0;i<5;i++)
    {
        cout << *(p+i) << " ";
    }

    cout << endl;

    cout << "\n------------------\n";

    // 4. Pointer Arithmetic
    cout << "Current Value: " << *p << endl;

    p++;

    cout << "After p++ : " << *p << endl;

    cout << "\n------------------\n";

    // 5. Function using Pointer
    int num = 5;

    changeValue(&num);

    cout << "After function call: " << num << endl;

    cout << "\n------------------\n";

    // 6. Swapping using Pointer
    int a = 10;
    int b = 20;

    swapNumbers(&a,&b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\n------------------\n";

    // 7. Pointer to Pointer
    int y = 200;

    int *ptr1 = &y;

    int **ptr2 = &ptr1;

    cout << "y = " << y << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "**ptr2 = " << **ptr2 << endl;

    cout << "\n------------------\n";

    // 8. Dynamic Memory Allocation
    int *dynamicPtr = new int;

    *dynamicPtr = 500;

    cout << "Dynamic Value = " << *dynamicPtr << endl;

    delete dynamicPtr;

    cout << "\n------------------\n";

    // 9. Dynamic Array
    int n = 5;

    int *dynamicArray = new int[n];

    for(int i=0;i<n;i++)
    {
        dynamicArray[i] = i + 1;
    }

    cout << "Dynamic Array: ";

    for(int i=0;i<n;i++)
    {
        cout << dynamicArray[i] << " ";
    }

    cout << endl;

    delete[] dynamicArray;

    cout << "\n------------------\n";

    // 10. Null Pointer
    int *nullPtr = NULL;

    cout << "Null Pointer = " << nullPtr << endl;

    return 0;
}