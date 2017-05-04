#pragma once

#include "BitsRequired.h"
#include "BitCount.h"
#include "MsbMask.h"

namespace Ardutils
{
	template< unsigned Number, typename T = BitsRequired<Number>::LeastType >
	struct LeadingOnes;

	template< unsigned Number, typename T >
	struct LeadingOnes
	{
		LeadingOnes(void) = delete;

		constexpr static const unsigned Value = ((Number & MsbMask<BitCount<T>::Value>::Value) != 0) ? 1 + LeadingOnes<(Number << 1), T>::Value : 0;
	};

	template< typename T >
	struct LeadingOnes<~0, T>
	{
		LeadingOnes(void) = delete;

		constexpr static const unsigned Value = BitCount<T>::Value;
	};

	template< typename T >
	struct LeadingOnes<0, T>
	{
		LeadingOnes(void) = delete;

		constexpr static const unsigned Value = 0;
	};
}