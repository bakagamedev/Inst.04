#pragma once

#include "BitsRequired.h"
#include "BitCount.h"
#include "LsbMask.h"

namespace Ardutils
{
	template< unsigned Number, typename T = BitsRequired<Number>::LeastType >
	struct TrailingOnes;

	template< unsigned Number, typename T >
	struct TrailingOnes
	{
		TrailingOnes(void) = delete;

		constexpr static const unsigned Value = ((Number & LsbMask<BitCount<T>::Value>::Value) != 0) ? 1 + TrailingOnes<(Number >> 1), T>::Value : 0;
	};

	template< typename T >
	struct TrailingOnes<~0, T>
	{
		TrailingOnes(void) = delete;

		constexpr static const unsigned Value = BitCount<T>::Value;
	};

	template< typename T >
	struct TrailingOnes<0, T>
	{
		TrailingOnes(void) = delete;

		constexpr static const unsigned Value = 0;
	};
}