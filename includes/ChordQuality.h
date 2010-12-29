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

#ifndef CHORDQUALITY_H__
#define CHORDQUALITY_H__

#include <string>
#include <vector>
#include <map>

#include "Interval.h"
#include "Key.h"

using namespace std;

class ChordQuality 
{
	string _name;
	vector<Interval *> _intervals;
	
public:
	// constructors
	ChordQuality(string name, vector<Interval *> &intervals);
	
	vector<Key *> getKeysFor(const Key *rootKey);
	
	// operators
	friend ostream& operator <<(ostream &stream, const ChordQuality &quality);
	friend ostream& operator <<(ostream &stream, const ChordQuality *quality);
};

namespace Jazz { extern map<string, ChordQuality *> chordQuality; };

#endif