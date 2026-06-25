#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10,20,30,40,50};
    int num;

    cin >> num;

    for(int i=0; i<5; i++) {
        if(arr[i] == num) {
            cout << "Found";
        }
         else{ 
            cout<< "not found";
        }

        
        
    }
   

    return 0;
}