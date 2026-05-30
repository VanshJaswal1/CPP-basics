// grading sysytem 

#include <iostream>
using namespace std;
int main(){

cout<<" || GARDING SYSYTEM||"<<endl;

int marks;
string name;
cout<<"write your name" << endl;
 getline(cin, name);
cout<<"write your marks"<<endl;;
cin>> marks;

if( marks>= 90){
 cout<<"congratulations you got A";

}

else if( marks>=70){
 cout<<"congratulations you got B";

}

else{
    cout<<"you had done great";
}











}