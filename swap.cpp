#include<iostream>
using namespace std;

int main(){
    int a, b;

    cin>>a;
    cin>>b;
    cout<<"a: "<<a<< endl;

    
    cout<<"b: "<<b<< endl;

    int c = a;
    a = b;
    b = c;

    cout << "now a: "<< a << " & b: " << b << endl;

    return 0;

}