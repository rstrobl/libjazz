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

#include "Jazz.h"

void Jazz::initDefaults()
{
	// Major
	{
		vector<KeyInterval> intervals;
		
		intervals.push_back(Interval::ROOT);
		intervals.push_back(Interval::MAJOR_3RD);
		intervals.push_back(Interval::PERFECT_5TH);

		chordQuality[""] = new ChordQuality("Major", intervals);
	}

	// Minor
	{
		vector<KeyInterval> intervals;
		
		intervals.push_back(Interval::ROOT);
		intervals.push_back(Interval::MINOR_3RD);
		intervals.push_back(Interval::PERFECT_5TH);

		chordQuality["m"] = new ChordQuality("Minor", intervals);
	}
}