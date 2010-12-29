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

#ifndef KEY_H__
#define KEY_H__

#include <string>
#include <vector>
#include <map>
#include <iostream>

typedef char Letter;

using namespace std;

class Key 
{
	string name;
	int index;
//	const Letter[] = {'C', 'D', 'E', 'F', 'G', 'A', 'B'};
	
public:
	// constructors
	Key(string name, int index);

	// operators
	friend ostream& operator <<(ostream &stream, const Key &key);
	friend ostream& operator <<(ostream &stream, const Key *key);
};

namespace Jazz { extern map<string, Key *> key; };

#endif