#pragma once

#include <stdint.h>
#include "BitCount.h"
#include "LsbMask.h"

namespace Ardutils
{
	template< typename T > uint_fast8_t CountTrailingZeroes(const T & value)
	{
		constexpr const auto bitCount = BitCount<T>::Value;
		constexpr const auto lsbMask = LsbMask<bitCount>::Value;

		if (value == static_cast<T>(0))
			return bitCount;

		uint_fast8_t count = 0;
		for (T v = value; (v & lsbMask) == 0; v >>= 1)
		{
			++count;
		}
		return count;
	}
}