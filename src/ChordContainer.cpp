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

#include "ChordContainer.h"

namespace Jazz { ChordContainer chord; }

Chord *ChordContainer::operator[](std::string chordName)
{
	// check wether chord is already listed
	if(this->find(chordName) == this->end())
	{
		string key, quality;
		string *current = &key;
		string::iterator it = chordName.begin();
		
		assert(chordName.length() > 0);
		
		// first character is the alphabetic letter from C to B and belongs to the key
		(*current)[0] = *(it++);
		
		for(; it != chordName.end(); it++)
		{	
			if(*it != '#' && *it != 'b')
				current = &quality;
			
			// append character to current string
			current->push_back(*it);
		}
		
		// create chord from the given information
//		((map<std::string, Chord *>)*this)[chordName] = new Chord(key, quality);
	}

	return ((map<std::string, Chord *>)*this)[chordName];
}