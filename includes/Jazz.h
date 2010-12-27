#ifndef JAZZ_H__
#define JAZZ_H__

#include <map>
#include <vector>
#include <string>

#include "Interval.h"
#include "ChordQuality.h"

class Jazz
{
private:
	std::map<std::string, ChordQuality *> chordQualities;
	
public:
	Jazz();
};


#endif