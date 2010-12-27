#ifndef KEY_H__
#define KEY_H__

#include <string>
#include <vector>

typedef char Letter;

#define FLAT -1
#define SHARP 1

class Key 
{
	static const Letter letters[] = {'C', 'D', 'E', 'F', 'G', 'A', 'B'};
	
public:
	Key(std::string, int);
};

#endif