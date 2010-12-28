#include <iostream>
#include <string>

#include "Jazz.h"

using namespace std;

int main(int argc, char *argv[])
{
	Jazz::initDefaults();
	
	cout << Jazz::chord["CMaj7"] << std::endl;
	
	return 0;
}