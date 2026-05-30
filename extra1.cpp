#include <iostream>
#include <iomanip> 
using namespace std;
int main() {

  cout<< " some important details  "<< endl;

  int a = 10 , b = 1000 , c = 10000 ;

  cout<<"without setw"<< a<<endl;
   cout<<"without setw"<< b<<endl;
    cout<<"without setw"<< c<<endl;

    cout<<endl;
    cout<<"with setw"<< setw(4)<<a<<endl;
      cout<<"with setw"<< setw(8)<<b<<endl;
      cout<<"with setw"<< setw(12)<<c<<endl;

  
}