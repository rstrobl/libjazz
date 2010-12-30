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

#include "Chord.h"

Chord::Chord(vector<Key *> &keys)
{
	_rootKey = NULL;
	_chordQuality = NULL;
	
	_keys = keys;
}


Chord::Chord(Key *key, ChordQuality *quality)
{
	_rootKey = key;
	_chordQuality = quality;
}

Chord::Chord(string key, string quality)
{
	_rootKey = Jazz::key[key];
	_chordQuality = Jazz::chordQuality[quality];
	
	_keys = _chordQuality->getKeysFor(_rootKey);
}

ostream& operator <<(ostream &stream, const Chord *chord)
{
	if(chord->_chordQuality == NULL)
		stream << "Custom chord / " << chord->_keys;
	
	else
		stream << chord->_rootKey << chord->_chordQuality << " / " << chord->_keys;

	return stream;
}

Chord *Chord::operator+(Key *key) const
{
	vector<Key *> newKeys = _keys;
	
	newKeys.push_back(key);
	
	return new Chord(newKeys);
}
