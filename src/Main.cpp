#include <iostream>
#include <string>

#include "Jazz.h"

using namespace std;

int main(int argc, char *argv[])
{
	Jazz::initDefaults();
	
	cout << Jazz::chord["Cm"] << endl;
	cout << Jazz::chord["GMaj7"] << endl;
	
	cout << Jazz::chord["Bbm7"] << endl;

	cout << Jazz::key["Bb"]->getMIDIKeys() << endl;

	return 0;
}