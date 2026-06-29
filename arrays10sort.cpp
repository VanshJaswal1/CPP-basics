#include <iostream>
using namespace std;
int main() {
   cout<<"sorting a unsorted array in asscending way"<<endl;
 int arr[6] = { 1,2,7,9,3,5};
 int temp;
 for(int i = 0 ; i <5;i++) {
    for(int j = 0; j<5 ; j++) {
        if( arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }
    }
 }
// printing a whole array
 for( int i=0; i<6; i++) {
  cout<< arr[i]<<endl;
 }

}