#include<iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << " is even number";
    }
    else{
        cout << " is odd number";
    }
    
    
    return 0;
}