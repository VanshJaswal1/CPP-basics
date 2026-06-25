#include <iostream>
using namespace std;
int main() {

 int arr[5] = {1,2,3,4,5};
 int sum=0;
 for( int i=0;i<5;i++) {
    sum+=arr[i];
 }
 cout<<sum<<endl;
 float average = 0;
 int size = sizeof(arr)/sizeof(arr[0]);
 average = sum/size;
cout<< " the avearge of the array is = " << average;

    }
//     A better way:

// average = (float)sum / size;

// or

// average = sum / (float)size;