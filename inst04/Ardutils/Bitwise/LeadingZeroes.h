#pragma once

#include "BitsRequired.h"
#include "BitCount.h"
#include "MsbMask.h"

namespace Ardutils
{
	template< unsigned Number, typename T = BitsRequired<Number>::LeastType >
	struct LeadingZeroes;

	template< unsigned Number, typename T >
	struct LeadingZeroes
	{
		LeadingZeroes(void) = delete;

		constexpr static const unsigned Value = ((Number & MsbMask<BitCount<T>::Value>::Value) == 0) ? 1 + LeadingZeroes<(Number << 1), T>::Value : 0;
	};

	template< typename T >
	struct LeadingZeroes<1, T>
	{
		LeadingZeroes(void) = delete;

		constexpr static const unsigned Value = 0;
	};

	template< typename T >
	struct LeadingZeroes<0, T>
	{
		LeadingZeroes(void) = delete;

		constexpr static const unsigned Value = BitCount<T>::Value;
	};
}