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

#include "Key.h"

namespace Jazz { map<string, Key *> key; };

Key::Key(string name, int halfTonesOverC)
{
	_name = name;
	_halfTonesOverC = halfTonesOverC;
}

vector<int> Key::getMIDIKeys()
{
	vector<int> midiKeys;
	int halfTonesOverCForA = Jazz::key["A"]->getHalfTonesOverC();
	
	// MIDI keys start with an A instead of a C
	// so the A, Bb and B before the first C also belongs to A
	if(_halfTonesOverC >= halfTonesOverCForA)
		midiKeys.push_back(21 + _halfTonesOverC - halfTonesOverCForA);
	
	// MIDI keys go from 21 (A0) to 108 (C8)
	// an octave consists of 12 halftones
	for(int i=24 + _halfTonesOverC; i<=108; i+=12)
		midiKeys.push_back(i);

	return midiKeys;
}


ostream& operator <<(ostream &stream, const Key *key)
{
	stream << key->_name;
	return stream;
}

Key *Key::operator+(const Interval *interval) const 
{
	for (map<string, Key *>::iterator it = Jazz::key.begin(); it != Jazz::key.end(); it++) 
	{
		int halfTones = this->getHalfTonesOverC();
		int refHalfTones = it->second->getHalfTonesOverC();
		
		// add an octave (12 half-tones) if the reference half tones are to small
		// for avoiding overflows
		if(refHalfTones < halfTones)
			refHalfTones += 12;

		// check whether halftones match
		// due to the enharmonic there will be more than one result
		// so we need to find the right letter after matching
		if(refHalfTones == halfTones + interval->getHalfTones())
		{
			char letterName = this->getName()[0];
			char refLetterName = it->second->getName()[0];
			
			// in case we want the distance from G to A
			// this will cause a negative value
			// therefore we need to get to the A over G by adding an octave to A
			// so we introduce the new fake letter H for getting a letter distance of 1
			// between G and H (A)
			// now we have a kind of circular buffer
			if(refLetterName < letterName)
				refLetterName += 7;

			// if the letter distance matches the key is returned
			if((refLetterName - letterName) == interval->getLetterIndex())
				return it->second;
		}
	}
	
	return NULL;
}