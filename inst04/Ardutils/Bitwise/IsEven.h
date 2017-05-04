#pragma once

namespace Ardutils
{
	template< typename T >
	constexpr bool IsEven(const T & value)
	{
		return (value & 0x1) == 0;
	}
}
