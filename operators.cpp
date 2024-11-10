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

    // Assignment Operators
    num1-=13;
    cout<<num1<<endl; 

    num2+=3;
    cout<<num2<<endl; 






    //Logical Operators
    //bool a = true;
    //bool b = false;

    //cout <<( a&&b )<< endl; //false
    //cout <<( a||b )<< endl; //true
    //cout <<( !a )<< endl; //false
    //cout <<( !b )<< endl; //true
    

    return 0;
}