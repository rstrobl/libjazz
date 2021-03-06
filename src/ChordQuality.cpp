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

#include "ChordQuality.h"

namespace Jazz { map<string, ChordQuality *> chordQuality; };

ChordQuality::ChordQuality(string name, vector<Interval *> &intervals)
{
	_name = name;
	_intervals = intervals;
}

vector<Key *> ChordQuality::getKeysFor(const Key *rootKey)
{
	vector<Key *> keys;
	
	// add intervals of chord quality to root key
	for (vector<Interval *>::iterator it = _intervals.begin(); it != _intervals.end(); it++) 
		keys.push_back(*rootKey + *it);
	
	return keys;
}


ostream& operator <<(ostream &stream, const ChordQuality &quality)
{
	stream << quality._name;
	return stream;
}

ostream& operator <<(ostream &stream, const ChordQuality *quality)
{
	stream << quality->_name;
	return stream;
}