#include<bits/stdc++.h>
using namespace std;

int main(){

    // Arithmetic operators
    //  +, -, *, /, %

    int a, b;
    cin >> a >> b;

    cout << a % b << endl;

    // Relational operator
    // <, >, <=, >=, ==, !=

    int AGE = 15;

    if(AGE > 18){
        cout << "DRIVE" << endl;

    }else {
        cout << "Canot Drive" << endl;
    }

    // logical operator
    // && , ||, !

    int age = 17;

    if(age < 0 || age > 120){
        cout << "Invalid Age" << endl;

    }else if(age >= 18){
        cout << "Drive" << endl;

    }else{
        cout << "Canot Drive" << endl;

    }

    // Assignment operators
    // =, +=, -=, /=, *=

    int x = 2, y = 3;
     y += x; // b = b + a

     cout << b ;

    return 0;
}