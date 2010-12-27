#ifndef INTERVAL_H__
#define INTERVAL_H__

typedef short KeyInterval;

namespace Interval
{

	const KeyInterval ROOT = 0;
	const KeyInterval MINOR_2ND = 1;
	const KeyInterval MAJOR_2ND = 2;
	const KeyInterval AUGMENTED_2ND = 3;
	const KeyInterval MINOR_3RD = 3;
	const KeyInterval MAJOR_3RD = 4;
	const KeyInterval PERFECT_4TH = 5;
	const KeyInterval AUGMENTED_4TH = 6;
	const KeyInterval TRITONE = 6;
	const KeyInterval DIMINISHED_5TH = 6;
	const KeyInterval PERFECT_5TH = 7;
	const KeyInterval AUGMENTED_5TH = 8;
	const KeyInterval MINOR_6TH = 8;
	const KeyInterval MAJOR_6TH = 9;
	const KeyInterval DIMINISHED_7TH = 9;
	const KeyInterval MINOR_7TH = 10;
	const KeyInterval DOMINANT_7TH = 10;
	const KeyInterval MAJOR_7TH = 11;
	const KeyInterval OCTAVE = 12;
};

#endif