#include<iostream>
using namespace std;

 typedef struct school
{
  string name;
  int marks;
  float feesubmitted;
  char grade;

}ep;

int main()
{
     struct school vansh;
     vansh.name = "vanshjaswal";
     vansh.marks = 100;
     vansh.feesubmitted = 20000;
     vansh.grade = 'A';
     cout<<vansh.name<<endl;
        cout<<vansh.marks<<endl;
           cout<<vansh.feesubmitted<<endl;
              cout<<vansh.grade<<endl;

              ep devansh;
              devansh.name = "devanshsharma";
     devansh.marks = 100;
     devansh.feesubmitted = 20000;
     devansh.grade = 'A';
     cout<<devansh.name<<endl;
        cout<<devansh.marks<<endl;
           cout<<devansh.feesubmitted<<endl;
              cout<<devansh.grade<<endl;




    
    return 0;
}