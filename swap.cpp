
// #include <iostream>
// using namespace std;
// int main()
//  {
//  cout<<" swapping the two numbers";
//    int a = 4;
//     int b = 8;
//     int c;

//     c = a;
//     a = b;
//     b = c;


//   cout<< "print a"<< a<<endl;

//  cout<< "print now b"<< b<<endl;
  


//  }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 4;
//     int b;

//     b = a;

//     cout<<"A = "<<a<<endl;
//     cout<<"B = "<<b<<endl;

//     return 0;
// }

// swapping without the 3 variable 

#include<iostream>
using namespace std;

int main()
{
    int a, b;
 cin>>a>>b;
  a = a + b;
 b = a - b;
 a = a - b;

 cout<<"A = "<<a<<endl;
cout<<"B = "<<b;

    return 0;
}