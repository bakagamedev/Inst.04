#pragma once

#include "LeastBits.h"

namespace Ardutils
{
	template< unsigned Bits >
	struct MsbMask
	{
	private:
		using Least = typename LeastBits< Bits >::LeastType;

	public:
		MsbMask(void) = delete;

		constexpr const static Least Value = (1ull << (Bits - 1));
	};
}