#include <iostream>
using namespace std;
int main() {
    
 int arr[5] = {1,2,3,4,5};
 int large = arr[0];
 // for trhe largest numberrrr
 for( int i=0;i<5;i++){

    if(arr[i]>large) {
        large = arr[i];
    }
 }
 cout<<" the largest number is "<< large;
 int small = arr[n];
 for( int n=0;n<5;n++){

    if(arr[i]>small) {
        small = arr[i];
    }
 }
  cout<<" the smallest number is "<<small;
}