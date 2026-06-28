#include <iostream>
using namespace std;
int main(){
// using pointerssssssssssssss
 int arr[6] = {1,2,3,4,5,6};
 int* Arr = arr;


for(int i = 0;i<6;i++) {
    //  cout<<*(Arr + i);
   cout<< *(Arr++);
}
// using the normal logiccccccccccc
 int arr1[5] = {1,2,3,4,5};
    int arr2[5];

    for(int i=0; i<5; i++) {
        arr2[i] = arr1[i];
    }

    for(int i=0; i<5; i++) {
       cout << arr2[i];

    }
 
}