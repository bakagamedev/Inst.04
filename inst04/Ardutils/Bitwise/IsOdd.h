#pragma once

namespace Ardutils
{
	template< typename T >
	constexpr bool IsOdd(const T & value)
	{
		return (value & 0x1) != 0;
	}
}