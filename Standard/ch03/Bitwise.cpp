//: C03:Bitwise.cpp
//{L} PrintBinary
// Demonstration of bit manipulation
#include "PrintBinary.h"
#include <iostream>
using namespace std;

// A macro to save typing:
#define PR(STR, EXPR) \
	cout << STR; PrintBinary(EXPR); cout << endl;

int main()
{
	unsigned int getval;
	unsigned char a, b;
	cout << "Enter a number between 0 and 225: ";
	cin >> getval; a = getval;
	PR("a in binary ", a);
	cout << "Enter a number between 0 and 225: ";
	cin >> getval; b = getval;
	PR("b in binary ", b);
	PR("a | b", a | b);
	PR("a & b", a & b);
	PR("a ^ b", a ^ b);
	PR("~a = ", ~a);
	PR("~b = ", ~b);
	// An interesting bit pattern:
	unsigned char c = 0x5A;
	PR("c in binary", c);
	 a |= c;
	 PR("a |= c; a = ", a);
	 b &= c;
	 PR("b &= c; b = ", b);
	 b ^= a;
	 PR("b ^= a; b = ", b);
	return 0;
} ///:~
