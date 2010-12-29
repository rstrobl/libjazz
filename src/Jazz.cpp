/*
 * This file is part of the libjazz project.
 *
 * Copyright (C) 2010, Free Software Foundation, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include "Jazz.h"

void Jazz::initDefaults()
{
	// intervals
	{
		interval[ROOT] 			 = new Interval(0, 0);
		interval[MINOR_2ND] 	 = new Interval(1, 1);
		interval[MAJOR_2ND]		 = new Interval(2, 1);
		interval[AUGMENTED_2ND]  = new Interval(3, 1);
		interval[MINOR_3RD] 	 = new Interval(3, 2);
		interval[MAJOR_3RD] 	 = new Interval(4, 2);
		interval[PERFECT_4TH] 	 = new Interval(5, 3);
		interval[AUGMENTED_4TH]  = new Interval(6, 3);
		interval[DIMINISHED_5TH] = new Interval(6, 4);
		interval[PERFECT_5TH] 	 = new Interval(7, 4);
		interval[AUGMENTED_5TH]  = new Interval(8, 4);
		interval[MINOR_6TH] 	 = new Interval(8, 5);
		interval[MAJOR_6TH] 	 = new Interval(9, 5);
		interval[DIMINISHED_7TH] = new Interval(9, 6);
		interval[MINOR_7TH] 	 = new Interval(10, 6);
		interval[DOMINANT_7TH] 	 = new Interval(10, 6);
		interval[MAJOR_7TH] 	 = new Interval(11, 6);
		interval[OCTAVE] 		 = new Interval(12, 7);
	}
	
	// keys
	{
		key["C"]   = new Key("C", 0);
		key["B#"]  = new Key("B#", 0);
		key["Dbb"] = new Key("Dbb", 0);
	
		key["Db"]  = new Key("Db", 1);
		key["C#"]  = new Key("C#", 1);
		key["B##"] = new Key("B##", 1);

		key["D"]   = new Key("D", 2);
		key["C##"] = new Key("C##", 2);
		key["Ebb"] = new Key("Ebb", 2);

		key["Eb"]  = new Key("Eb", 3);
		key["D#"]  = new Key("D#", 3);
		key["Fbb"] = new Key("Fbb", 3);

		key["E"]   = new Key("E", 4);
		key["Fb"]  = new Key("Fb", 4);
		key["D##"] = new Key("D##", 4);
	
		key["F"]   = new Key("F", 5);
		key["E#"]  = new Key("E#", 5);
		key["Gbb"] = new Key("Gbb", 5);

		key["Gb"]  = new Key("Gb", 6);
		key["F#"]  = new Key("F#", 6);
		key["E##"] = new Key("E##", 6);

		key["G"]   = new Key("G", 7);
		key["F##"] = new Key("F##", 7);
		key["Abb"] = new Key("Abb", 7);

		key["Ab"]  = new Key("Ab", 8);
		key["G#"]  = new Key("G#", 8);

		key["A"]   = new Key("A", 9);
		key["Bbb"] = new Key("Bbb", 9);
		key["G##"] = new Key("G##", 9);

		key["Bb"]  = new Key("Bb", 10);
		key["A#"]  = new Key("A#", 10);
		key["Cbb"] = new Key("Cbb", 10);

		key["B"]   = new Key("B", 11);
		key["Cb"]  = new Key("Cb", 11);
		key["A##"] = new Key("A##", 11);
	}
	
	// chords
	{
		ChordQuality *major, *minor;
	
		// Major
		{
			vector<Interval *> intervals;
		
			intervals.push_back(interval[ROOT]);
			intervals.push_back(interval[MAJOR_3RD]);
			intervals.push_back(interval[PERFECT_5TH]);

			chordQuality[""] = major = new ChordQuality("", intervals);		
		}
		
		// Major 7
		{
			vector<Interval *> intervals = major->getIntervals();
				
			intervals.push_back(interval[MINOR_7TH]);

			chordQuality["7"] = new ChordQuality("7", intervals);		
		}
	
		// Major Maj7
		{
			vector<Interval *> intervals = major->getIntervals();
				
			intervals.push_back(interval[MAJOR_7TH]);

			chordQuality["Maj7"] = new ChordQuality("Maj7", intervals);		
		}
	
		// Minor
		{
			vector<Interval *> intervals;
		
			intervals.push_back(interval[ROOT]);
			intervals.push_back(interval[MINOR_3RD]);
			intervals.push_back(interval[PERFECT_5TH]);

			chordQuality["m"] = minor = new ChordQuality("m", intervals);
		}
		
		// Minor 7
		{
			vector<Interval *> intervals = minor->getIntervals();
				
			intervals.push_back(interval[MINOR_7TH]);

			chordQuality["m7"] = new ChordQuality("m7", intervals);		
		}	
	}
}