#include "Jazz.h"

using namespace std;

Jazz::Jazz()
{
	// Major
	{
		vector<KeyInterval> intervals;
		
		intervals.push_back(Interval::ROOT);
		intervals.push_back(Interval::MAJOR_3RD);
		intervals.push_back(Interval::PERFECT_5TH);

		chordQualities[""] = new ChordQuality("Major", intervals);
	}

	// Minor
	{
		vector<KeyInterval> intervals;
		
		intervals.push_back(Interval::ROOT);
		intervals.push_back(Interval::MINOR_3RD);
		intervals.push_back(Interval::PERFECT_5TH);

		chordQualities["m"] = new ChordQuality("Minor", intervals);
	}

}