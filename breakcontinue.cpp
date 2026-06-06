#include <iostream>
using namespace std;
int main(){
 cout<< "this is break and continue"<< endl;
  int i=10;
 cout<< " number upto 10 from 0 which are not the multiple of 5" << endl;
 
 for(i=0 ; i<=10; i++)
{
if( i==5 || i==10) 
 continue;

 cout<<i<<endl;
}


}
