#include <iostream>
using namespace std;
int main(){

 int arr[6] = {1,2,3,4,5,6};
 int* Arr = arr;


for(int i = 0;i<6;i++) {
    //  cout<<*(Arr + i);
   cout<< *(Arr++);
}


}