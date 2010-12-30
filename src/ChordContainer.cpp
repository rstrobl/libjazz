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
	map<string, Chord *>::iterator it = this->find(chordName);

	if(it != this->end())
		return it->second;
	
	// nothing found, so we have to create a new record
	string key, quality;
		
	boost::regex expr("([A-G][#|b]?)(\\w*)");
	boost::smatch matches;

	if(!boost::regex_search(chordName, matches, expr))
		return NULL;

	key = matches[1];
	quality = matches[2];

	// insert key/value pair into map and return the value
	return (*((this->insert(make_pair(chordName, new Chord(key, quality)))).first)).second;		
}