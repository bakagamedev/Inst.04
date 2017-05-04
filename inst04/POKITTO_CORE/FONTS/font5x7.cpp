/*
 * (C) Copyright 2014 Aurélien Rodot. All rights reserved.
 *
 * This file is part of the Gamebuino Library (http://gamebuino.com)
 *
 * The Gamebuino Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef FONT5X7_C
#define FONT5X7_C

#include <stdint.h>
#include "PokittoFonts.h"

#define PROGMEM


// standard ascii 5x7 font
const uint8_t font5x7[] PROGMEM = {
	5,7,0,0, // width and height, start char and only caps ?
    5, 0x7F, 0x41, 0x41, 0x41, 0x7F, // 0
    5, 0x3E, 0x5B, 0x4F, 0x5B, 0x3E, // 1  sad
    5, 0x3E, 0x6B, 0x4F, 0x6B, 0x3E, // 2  happy
    5, 0x18, 0x3C, 0x78, 0x3C, 0x18, // 3  heart
    5, 0x18, 0x3C, 0x7E, 0x3C, 0x18, // 4  diamond
    5, 0x1C, 0x57, 0x7D, 0x57, 0x1C, // 5  clover
    5, 0x1C, 0x5E, 0x7F, 0x5E, 0x1C, // 6  spade
   5,  0x00, 0x7E, 0x43, 0x43, 0x7E, // 7  bat low
    5, 0x00, 0x7E, 0x73, 0x73, 0x7E, // 8  bat med
    5, 0x00, 0x7E, 0x7F, 0x7F, 0x7E, // 9  bat high
    5, 0x7F, 0x41, 0x41, 0x41, 0x7F, // 10  line feed
    5, 0x30, 0x48, 0x3A, 0x06, 0x0E, // 11  male
    5, 0x06, 0x29, 0x79, 0x29, 0x06, // 12  female
    5, 0x7F, 0x41, 0x41, 0x41, 0x7F, // 13  carriage return
    5, 0x60, 0x70, 0x3F, 0x02, 0x04, // 14  note
    5, 0x2A, 0x1C, 0x36, 0x1C, 0x2A, // 15  sun
    5, 0x7F, 0x3E, 0x1C, 0x08, 0x00, // 16  right triangle
    5, 0x00, 0x08, 0x1C, 0x3E, 0x7F, // 17  left triangle
    5, 0x14, 0x22, 0x7F, 0x22, 0x14, // 18  double arrow
    5, 0x3C, 0x3C, 0x3C, 0x7E, 0xFF, // 19  speaker
    5, 0x18, 0x42, 0x3C, 0x81, 0x7E, // 20  sound
    5, 0x3E, 0x63, 0x75, 0x63, 0x3E, // 21  A button
    5, 0x3E, 0x61, 0x6B, 0x63, 0x3E, // 22  B button
    5, 0x3E, 0x63, 0x6B, 0x6B, 0x3E, // 23  C button
    5, 0x04, 0x02, 0x7F, 0x02, 0x04, // 24  up arrow
    5, 0x10, 0x20, 0x7F, 0x20, 0x10, // 25  down arrow
    5, 0x08, 0x08, 0x2A, 0x1C, 0x08, // 26  right arrow
    5, 0x08, 0x1C, 0x2A, 0x08, 0x08, // 27  left arrow
    5, 0x14, 0x3E, 0x55, 0x41, 0x22, // 28  euro
    5, 0x63, 0x75, 0x69, 0x75, 0x63, // 29  timer
    5, 0x10, 0x18, 0x1C, 0x18, 0x10, // 30  up triangle
    5, 0x04, 0x0C, 0x1C, 0x0C, 0x04, // 31  down triangle
    5, 0x00, 0x00, 0x00, 0x00, 0x00, // 32  space
    5, 0x00, 0x00, 0x5F, 0x00, 0x00, // 33
    5, 0x00, 0x07, 0x00, 0x07, 0x00, // 34
    5, 0x14, 0x7F, 0x14, 0x7F, 0x14, // 35
    5, 0x04, 0x2A, 0x7F, 0x2A, 0x10, // 36
    5, 0x23, 0x13, 0x08, 0x64, 0x62, // 37
    5, 0x36, 0x49, 0x56, 0x20, 0x50, // 38
    5, 0x00, 0x08, 0x07, 0x03, 0x00, // 39
    5, 0x00, 0x1C, 0x22, 0x41, 0x00, // 40
    5, 0x00, 0x41, 0x22, 0x1C, 0x00, // 41
    5, 0x2A, 0x1C, 0x3E, 0x1C, 0x2A, // 42
    5, 0x08, 0x08, 0x3E, 0x08, 0x08, // 43
    5, 0x00, 0xE0, 0x60, 0x00, 0x00, // 44
    5, 0x08, 0x08, 0x08, 0x08, 0x08, // 45
    5, 0x00, 0x60, 0x60, 0x00, 0x00, // 46
    5, 0x60, 0x10, 0x08, 0x04, 0x03, // 47
    5, 0x3E, 0x51, 0x49, 0x45, 0x3E, // 48  0
    5, 0x00, 0x42, 0x7F, 0x40, 0x00, // 49  1
    5, 0x62, 0x51, 0x49, 0x49, 0x46, // 50  2
    5, 0x21, 0x41, 0x49, 0x4D, 0x33, // 51  3
    5, 0x18, 0x14, 0x12, 0x7F, 0x10, // 52  4
    5, 0x27, 0x45, 0x45, 0x45, 0x39, // 53  5
    5, 0x3C, 0x4A, 0x49, 0x49, 0x30, // 54  6
    5, 0x41, 0x21, 0x11, 0x09, 0x07, // 55  7
    5, 0x36, 0x49, 0x49, 0x49, 0x36, // 56  8
    5, 0x06, 0x49, 0x49, 0x29, 0x1E, // 57  9
    5, 0x00, 0x00, 0x24, 0x00, 0x00, // 58
    5, 0x00, 0x80, 0x64, 0x00, 0x00, // 59
    5, 0x08, 0x14, 0x22, 0x41, 0x00, // 60
    5, 0x14, 0x14, 0x14, 0x14, 0x14, // 61
    5, 0x00, 0x41, 0x22, 0x14, 0x08, // 62
    5, 0x02, 0x01, 0x59, 0x09, 0x06, // 63
    5, 0x3E, 0x41, 0x5D, 0x59, 0x4E, // 64
    5, 0x7C, 0x12, 0x11, 0x12, 0x7C, // 65  A
    5, 0x7F, 0x49, 0x49, 0x49, 0x36, // 66  B
    5, 0x3E, 0x41, 0x41, 0x41, 0x22, // 67  C
    5, 0x7F, 0x41, 0x41, 0x22, 0x1C, // 68  D
    5, 0x7F, 0x49, 0x49, 0x49, 0x41, // 69  E
    5, 0x7F, 0x09, 0x09, 0x09, 0x01, // 70  F
    5, 0x3E, 0x41, 0x41, 0x51, 0x32, // 71  G
    5, 0x7F, 0x08, 0x08, 0x08, 0x7F, // 72  H
    5, 0x00, 0x41, 0x7F, 0x41, 0x00, // 73  I
    5, 0x20, 0x41, 0x41, 0x3F, 0x01, // 74  J
    5, 0x7F, 0x08, 0x14, 0x22, 0x41, // 75  K
    5, 0x7F, 0x40, 0x40, 0x40, 0x40, // 76  L
    5, 0x7F, 0x02, 0x0C, 0x02, 0x7F, // 77  M
    5, 0x7F, 0x02, 0x04, 0x08, 0x7F, // 78  N
    5, 0x3E, 0x41, 0x41, 0x41, 0x3E, // 79  O
    5, 0x7F, 0x09, 0x09, 0x09, 0x06, // 80  P
    5, 0x3E, 0x41, 0x61, 0x41, 0xBE, // 81  Q
    5, 0x7F, 0x09, 0x19, 0x29, 0x46, // 82  R
    5, 0x26, 0x49, 0x49, 0x49, 0x32, // 83  S
    5, 0x01, 0x01, 0x7F, 0x01, 0x01, // 84  T
    5, 0x3F, 0x40, 0x40, 0x40, 0x3F, // 85  U
    5, 0x1F, 0x20, 0x40, 0x20, 0x1F, // 86  V
    5, 0x3F, 0x40, 0x38, 0x40, 0x3F, // 87  W
    5, 0x63, 0x14, 0x08, 0x14, 0x63, // 88  X
    5, 0x03, 0x04, 0x78, 0x04, 0x03, // 89  Y
    5, 0x61, 0x51, 0x49, 0x45, 0x43, // 90  Z
    5, 0x00, 0x7F, 0x41, 0x41, 0x00, // 91
    5, 0x03, 0x04, 0x08, 0x10, 0x60, // 92
    5, 0x00, 0x41, 0x41, 0x7F, 0x00, // 93
    5, 0x04, 0x02, 0x01, 0x02, 0x04, // 94
    5, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    5, 0x00, 0x03, 0x07, 0x08, 0x00, // 96
    5, 0x20, 0x54, 0x54, 0x78, 0x40, // 97  a
    5, 0x7F, 0x28, 0x44, 0x44, 0x38, // 98  b
   5,  0x38, 0x44, 0x44, 0x44, 0x28, // 99  c
   5,  0x38, 0x44, 0x44, 0x28, 0x7F, // 100  d
   5,  0x38, 0x54, 0x54, 0x54, 0x18, // 101  e
   5,  0x08, 0x7E, 0x09, 0x09, 0x02, // 102  f
   5,  0x18, 0xA4, 0xA4, 0x9C, 0x78, // 103  g
   5,  0x7F, 0x08, 0x04, 0x04, 0x78, // 104  h
   5,  0x00, 0x44, 0x7D, 0x40, 0x00, // 105  i
   5,  0x00, 0x60, 0x80, 0x84, 0x7D, // 106  j
   5,  0x7F, 0x10, 0x10, 0x28, 0x44, // 107  k
   5,  0x00, 0x41, 0x7F, 0x40, 0x00, // 108  l
   5,  0x7C, 0x04, 0x78, 0x04, 0x78, // 109  m
   5,  0x7C, 0x08, 0x04, 0x04, 0x78, // 110  n
   5,  0x38, 0x44, 0x44, 0x44, 0x38, // 111  o
   5,  0xFC, 0x18, 0x24, 0x24, 0x18, // 112  p
   5,  0x18, 0x24, 0x24, 0x18, 0xFC, // 113  q
   5,  0x7C, 0x08, 0x04, 0x04, 0x08, // 114  r
   5,  0x08, 0x54, 0x54, 0x54, 0x20, // 115  s
   5,  0x04, 0x3F, 0x44, 0x44, 0x20, // 116  t
   5,  0x3C, 0x40, 0x40, 0x20, 0x7C, // 117  u
   5,  0x1C, 0x20, 0x40, 0x20, 0x1C, // 118  v
   5,  0x3C, 0x40, 0x20, 0x40, 0x3C, // 119  w
   5,  0x44, 0x28, 0x10, 0x28, 0x44, // 120  x
   5,  0x4C, 0x90, 0x90, 0x90, 0x7C, // 121  y
   5,  0x44, 0x64, 0x54, 0x4C, 0x44, // 122  z
   5,  0x00, 0x08, 0x36, 0x41, 0x00, // 123
   5,  0x00, 0x00, 0x7F, 0x00, 0x00, // 124
   5,  0x00, 0x41, 0x36, 0x08, 0x00, // 125
   5,  0x18, 0x04, 0x08, 0x10, 0x0C, // 126
    5, 0x7F, 0x41, 0x41, 0x41, 0x7F // 127
};

#endif
