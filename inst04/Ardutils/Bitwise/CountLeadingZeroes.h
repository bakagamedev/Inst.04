#pragma once

#include <stdint.h>
#include "BitCount.h"
#include "MsbMask.h"

namespace Ardutils
{
	template< typename T > uint_fast8_t CountLeadingZeroes(const T & value)
	{
		constexpr const auto bitCount = BitCount<T>::Value;
		constexpr const auto msbMask = MsbMask<bitCount>::Value;

		if (value == static_cast<T>(0))
			return bitCount;

		uint_fast8_t i = 0;
		for (T v = value; (v & msbMask) == 0; v <<= 1)
		{
			++i;
		}
		return i;
	}
}