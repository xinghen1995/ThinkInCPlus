//: C03:Guess2.cpp
// The guess program using do-while
// Created by XPL on 2019/10/17.
#include <iostream>

using namespace std;

int main() {
    int secret = 15;
    int guess; // No initialization needed here
    do {
        cout << "guess the number: ";
        cin >> guess; // Initialization happens
    } while (guess != secret);
    cout << "You got it!" << endl;
} ///:~
