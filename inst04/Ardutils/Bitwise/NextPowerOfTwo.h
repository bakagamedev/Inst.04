#pragma once

#include "LeastBits.h"
#include "BitsRequired.h"

namespace Ardutils
{
	template< unsigned long long Number >
	struct NextPowerOfTwo
	{
	private:
		using LeastType = LeastType<BitsRequired<Number>::Value + 1>;

	public:
		NextPowerOfTwo(void) = delete;

		constexpr static const LeastType Value = BitsRequired<Number>::Value << 1;
	};
}
