#include <iostream>
using namespace std;

int main(){

    // sizeof operators
    int a = 4;
    cout<<sizeof(a)<< endl; //4

    char name = 'a';
    cout << sizeof(name)<<endl; //1

    bool flag;

    // ternary operators
    a==name? flag = true : flag = false;
    cout<<flag<<endl; //0


    // & address operators
    cout<< (&a) << endl;

    // post increment and pre increment
    int b = 7;
    int c = 12;

    cout<<++b<<endl; //8
    cout<<c++<<endl; //12

    return 0;
}