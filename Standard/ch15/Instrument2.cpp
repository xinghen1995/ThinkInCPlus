//: C15:Instrument2.cpp
// Inheritance & upcasting
// Created by XPL on 2019/10/10.
#include <iostream>

using namespace std;
enum note {
    middleC, Csharp, Eflat
}; // Etc.

class Instrument {
public:
    void play(note) const {
        cout << "Instrument::play" << endl;
    }
};

// Wind objects are Instruments
// because they are the same interface:
class Wind : public Instrument {
public:
    // Redefine interface function
    void play(note) const {
        cout << "Wind::play" << endl;
    }
};

void tune(Instrument &i) {
    // ...
    i.play(middleC);
}

int main() {
    Wind flute;

    tune(flute); // Upcasting
} ///:~
