#include <iostream>
using namespace std;
int main() {
   cout<<"frequency of an element"<<endl;
 int arr[9] = { 1,1,1,1,2,7,9,3,5};
 int count= 0;
 int x;
 cout<< "enter the value fom the array "<< endl; 
cin>>x;

    for(int j = 0; j<9; j++) {
        if( arr[j] == x) {
            count++;
    
    }
  
 }
 cout<< count;
}