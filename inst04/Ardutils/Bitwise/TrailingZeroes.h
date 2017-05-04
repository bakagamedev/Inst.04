#pragma once

#include "BitsRequired.h"
#include "BitCount.h"
#include "LsbMask.h"

namespace Ardutils
{
	template< unsigned Number, typename T = BitsRequired<Number>::LeastType >
	struct TrailingZeroes;

	template< unsigned Number, typename T >
	struct TrailingZeroes
	{
		TrailingZeroes(void) = delete;

		constexpr static const unsigned Value = ((Number & LsbMask<BitCount<T>::Value>::Value) == 0) ? 1 + TrailingZeroes<(Number >> 1), T>::Value : 0;
	};

	template< typename T >
	struct TrailingZeroes<1, T>
	{
		TrailingZeroes(void) = delete;

		constexpr static const unsigned Value = 0;
	};

	template< typename T >
	struct TrailingZeroes<0, T>
	{
		TrailingZeroes(void) = delete;

		constexpr static const unsigned Value = BitCount<T>::Value;
	};
}