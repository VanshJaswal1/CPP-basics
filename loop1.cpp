#include <iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Enter limit: ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        cout << i << endl;
    }

cout<<"  even number upto user wish"<<endl;

int a,b;
cout<<"enter the value of b" <<endl;
cin>>b;
for(a=0; a<=b; a=a+2) {

 cout<<a<<endl;


}

 cout<<"  odd number upto user wish"<<endl;
int c,d;
cout<<"enter the value of d" <<endl;
cin>>d;
for(c=1; c<=d; c=c+2) {

 cout<<c<<endl;

}
    return 0;
}