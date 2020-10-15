//: C03:DynamicDebugFlags.cpp
#include <iostream>
#include <string>
using namespace std;
// Debug flags aren't neccessarily global:
bool debug = false;

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		if (string(argv[i]) == "--debug=on")
		{
			debug = true;
		}
	}
	bool go = true;
	while (go)
	{
		if (debug)
		{
			// Debug code here
			cout << "Debugger is now on!" << endl;
		}
		else
		{
			cout << "Debugger is no off." << endl;
		}
		cout << "Turn debugger [on/off/quit]: ";
		string reply;
		cin >> reply;
		if (reply == "on")
		{
			debug = true; // Turn it on
		}
		if (reply == "off")
		{
			debug = false; // Turn it off
		}
		if (reply == "quit")
		{
			break; // out of while
		}
	}
}
