#include<iostream>
using namespace std;

int main(){
    int num1 = 26;
    int num2 = 8;

    // Arithmetic Operators
    cout <<num1+num2<< endl;
    cout <<num1-num2<< endl;
    cout <<num1/num2<< endl;
    cout <<num1*num2<< endl;
    cout <<num1%num2<< endl;

    // Relational Operators
    cout <<(num1<num2)<< endl; //false
    cout <<(num1>num2)<< endl; //true
    cout <<(num1!=num2)<< endl; //true
    cout <<(num1==num2)<< endl; //false
    cout <<(num1<=num2)<< endl; //false
    cout <<(num1>=num2)<< endl; //true

    return 0;
}