#pragma once

#include "LeastBits.h"

namespace Ardutils
{
	template< unsigned Bits >
	struct IdentityMask
	{
	private:
		using Least = typename LeastBits< Bits >::LeastType;

	public:
		IdentityMask(void) = delete;

		constexpr const static Least Value = (IdentityMask<Bits - 1>::Value << 1) | 1;
	};

	template<>
	struct IdentityMask<0>
	{
	private:
		using Least = typename LeastBits<0>::LeastType;

	public:
		IdentityMask(void) = delete;

		constexpr const static Least Value = 0;
	};
}
