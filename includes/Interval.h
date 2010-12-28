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

typedef short KeyInterval;

namespace Interval
{

	const KeyInterval ROOT = 0;
	const KeyInterval MINOR_2ND = 1;
	const KeyInterval MAJOR_2ND = 2;
	const KeyInterval AUGMENTED_2ND = 3;
	const KeyInterval MINOR_3RD = 3;
	const KeyInterval MAJOR_3RD = 4;
	const KeyInterval PERFECT_4TH = 5;
	const KeyInterval AUGMENTED_4TH = 6;
	const KeyInterval TRITONE = 6;
	const KeyInterval DIMINISHED_5TH = 6;
	const KeyInterval PERFECT_5TH = 7;
	const KeyInterval AUGMENTED_5TH = 8;
	const KeyInterval MINOR_6TH = 8;
	const KeyInterval MAJOR_6TH = 9;
	const KeyInterval DIMINISHED_7TH = 9;
	const KeyInterval MINOR_7TH = 10;
	const KeyInterval DOMINANT_7TH = 10;
	const KeyInterval MAJOR_7TH = 11;
	const KeyInterval OCTAVE = 12;
};

#endif