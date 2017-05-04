#pragma once

#include "LeastBits.h"

namespace Ardutils
{
	template< unsigned Bits >
	struct LsbMask
	{
	private:
		using Least = typename LeastBits< Bits >::LeastType;

	public:
		LsbMask(void) = delete;

		constexpr const static Least Value = 1ull;
	};
}