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

#ifndef INTERVAL_H__
#define INTERVAL_H__

#include <map>

using namespace std;

enum KeyInterval
{ 
	ROOT,
	MINOR_2ND,
	MAJOR_2ND,
	AUGMENTED_2ND,
	MINOR_3RD,
	MAJOR_3RD,
	PERFECT_4TH,
	AUGMENTED_4TH,
	TRITONE,
	DIMINISHED_5TH,
	PERFECT_5TH,
	AUGMENTED_5TH,
	MINOR_6TH,
	MAJOR_6TH,
	DIMINISHED_7TH,
	MINOR_7TH,
	DOMINANT_7TH,
	MAJOR_7TH,
	OCTAVE
};

class Interval
{
	int _halfTones;
	int _letterIndex;

public:
	// constructors
	Interval(int halfTones, int letterIndex);
};

namespace Jazz { extern map<KeyInterval, Interval *> interval; };

#endif