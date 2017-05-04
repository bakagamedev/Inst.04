#pragma once

namespace Ardutils
{
	template< typename T > constexpr bool IsPowerOfTwo(const T & value) noexcept
	{
		return (value != 0) && ((value & (value - 1)) == 0);
	}

	// Example 1:
	// IsPowerOfTwo(8)
	//   8 -> 0100
	//   (0100 - 1) -> 0011
	//   (0100 & 0011) -> 0000
	// IsPowerOfTwo(8) -> true
	//
	// Example 2:
	// IsPowerOfTwo(6)
	//   0110 // dec: 6
	//   (0110 - 1) -> 0101
	//   (0110 & 0101) -> 0100
	// IsPowerOfTwo(6) -> false
}