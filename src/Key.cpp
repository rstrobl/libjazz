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
	this->_name = name;
	this->_halfTonesOverC = halfTonesOverC;
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
		// check whether halftones match
		// due to the enharmonic there will be more than one result
		// so we need to find the right letter after matching
		if(it->second->getHalfTonesOverC() == this->getHalfTonesOverC() + interval->getHalfTones())
		{
			char letterName = this->getName()[0];
			char refLetterName = it->second->getName()[0];
			int octave = 0;
			
			// in case we want the distance from G to A
			// this will cause a negative value
			// therefore we need to get to the A over G by adding an octave to A
			// so we introduce the new letter H for getting a letter distance of 1
			// between G and H (A)
			if(refLetterName < letterName)
				octave = 7;

			// if the letter distance matches the key is returned
			if((octave + refLetterName - letterName) == interval->getLetterIndex())
				return it->second;
		}
	}
	
	return NULL;
}