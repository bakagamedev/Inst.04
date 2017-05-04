#pragma once

#include <limits.h>

namespace Ardutils
{
	template< typename T >
	struct BitCount
	{
		BitCount(void) = delete;

		constexpr static const unsigned Value = sizeof(T) * CHAR_BIT;
	};
}