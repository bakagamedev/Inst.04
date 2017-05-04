#pragma once

#include "LeastBits.h"

namespace Ardutils
{
	template< unsigned long long Number >
	struct BitsRequired
	{
		BitsRequired(void) = delete;

		constexpr static const unsigned Value = 1 + BitsRequired<(Number >> 1)>::Value;

		using LeastType = typename LeastBits<Value>::LeastType;
		using FastType = typename LeastBits<Value>::FastType;
	};

	template<>
	struct BitsRequired<0ull>
	{
		BitsRequired(void) = delete;

		constexpr static const unsigned Value = 0u;

		using LeastType = typename LeastBits<Value>::LeastType;
		using FastType = typename LeastBits<Value>::FastType;
	};
}