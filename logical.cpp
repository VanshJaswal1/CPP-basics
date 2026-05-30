#include <iostream>
using namespace std;
int main() {

  cout<< " LOGICAL  OPERATORS "<< endl;

// Logical AND, &&, Returns true only if all the operands are true or non-zero
// Logical OR, ||, Returns true if either of the operands is true or non-zero
// Logical NOT, !, Returns true if the operand is false or zero

int a= 5 , b = 10;  

cout<<"logical &&"<< (a&&b)<< endl; 
cout<<"logical &&"<<  ((a>=b) && (b) )<< endl; 
cout<<"logical ||"<< (a||b)<< endl; 
cout<<"logical !b"<< (!b)<< endl; 
 
}