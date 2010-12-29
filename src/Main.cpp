#include <iostream>
#include <string>

#include "Jazz.h"

using namespace std;

int main(int argc, char *argv[])
{
	Jazz::initDefaults();
	
	cout << Jazz::chord["Cm"] << endl;
	
	vector<Key *> keys = Jazz::chordQuality[""]->getKeysFor(Jazz::key["C##"]);
	
	for (vector<Key *>::iterator it = keys.begin(); it!=keys.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
}