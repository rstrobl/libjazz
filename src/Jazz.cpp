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
	//// keys
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

	//// chords
	// Major
	{
		vector<KeyInterval> intervals;
		
		intervals.push_back(Interval::ROOT);
		intervals.push_back(Interval::MAJOR_3RD);
		intervals.push_back(Interval::PERFECT_5TH);

		chordQuality[""] = new ChordQuality("Major", intervals);
	}

	// Minor
	{
		vector<KeyInterval> intervals;
		
		intervals.push_back(Interval::ROOT);
		intervals.push_back(Interval::MINOR_3RD);
		intervals.push_back(Interval::PERFECT_5TH);

		chordQuality["m"] = new ChordQuality("Minor", intervals);
	}
}