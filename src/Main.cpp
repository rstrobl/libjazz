#include <iostream>
#include <string>

#include "Jazz.h"

using namespace std;

int main(int argc, char *argv[])
{
	Jazz::initDefaults();
	
	cout << Jazz::chord["Cm"] << endl;
	cout << Jazz::chord["GMaj7"] << endl;
	
	return 0;
}