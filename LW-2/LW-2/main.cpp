//
//  main.cpp
//  LW-2
//
//  Created by MacBook on 02.04.2023.
//

#include <iostream>
using namespace std;

int main(){
    
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    if (a>b) {cout << "max(a,b) = " << a << '\n';}
    else {cout << "max(a,b) = " << b << '\n';}
    
}
