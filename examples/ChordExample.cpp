#include <iostream>
#include <string>

#include "Jazz.h"

using namespace std;

int main(int argc, char *argv[])
{
	Jazz::initDefaults();
	
	cout << Jazz::chord["CMaj7"] << endl;
	cout << Jazz::chord["GMaj7"] << endl;
	
	cout << Jazz::chord["Bbm7"] << endl;

	Chord *c = Jazz::chord["G#Maj7"];

	cout << c << endl;
	cout << c->getKeys()[0]->getMIDIKeys() << endl;
	cout << Jazz::chord["G#Maj7"] << endl;
	cout << (*Jazz::chord["C"] + Jazz::key["A"])  << endl;
	cout << (*Jazz::chord["C"] + Jazz::interval[MINOR_7TH])  << endl;
	
	return 0;
}