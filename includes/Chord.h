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

#ifndef CHORD_H__
#define CHORD_H__

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "Key.h"
#include "ChordQuality.h"

using namespace std;

class Chord 
{
	Key *rootKey;
	ChordQuality *chordQuality;

	vector<Key *> keys;
	
public:
	// constructors
	Chord(Key *key, ChordQuality *quality);
	Chord(string key, string quality);
		
	// operators
	friend ostream& operator <<(ostream &stream, const Chord &chord);
	friend ostream& operator <<(ostream &stream, const Chord *chord);
};

#endif