#include<iostream>
using namespace std;

int main() {
    int arr[8] = {10,20,30,40,50,55,67,53};
    int count = 0;
    for(int i=0; i<8;i++){
        if(arr[i]%2 == 0){
          
            count++; 
            
        }
    }
  cout<< "the total number of even numbers areee =  "<< count;
}