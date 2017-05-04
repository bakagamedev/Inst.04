#pragma once

#include <stdint.h>

namespace Ardutils
{
	template< unsigned Bits >
	struct LeastBits
	{
		static_assert(Bits <= 64, "No type capable of holding more than 64 bits");

		LeastBits(void) = delete;

		using LeastType = typename LeastBits<Bits + 1>::LeastType;
		using FastType = typename LeastBits<Bits + 1>::FastType;
		using LeastSignedType = typename LeastBits<Bits + 1>::LeastSignedType;
		using FastSignedType = typename LeastBits<Bits + 1>::FastSignedType;
	};
	
	template<>
	struct LeastBits<8>
	{
		LeastBits(void) = delete;

		using LeastType = uint_least8_t;
		using FastType = uint_fast8_t;
		using LeastSignedType = int_least8_t;
		using FastSignedType = int_fast8_t;
	};

	template<>
	struct LeastBits<16>
	{
		LeastBits(void) = delete;

		using LeastType = uint_least16_t;
		using FastType = uint_fast16_t;
		using LeastSignedType = int_least16_t;
		using FastSignedType = int_fast16_t;

	};

	template<>
	struct LeastBits<32>
	{
		LeastBits(void) = delete;

		using LeastType = uint_least32_t;
		using FastType = uint_fast32_t;
		using LeastSignedType = int_least32_t;
		using FastSignedType = int_fast32_t;
	};

	template<>
	struct LeastBits<64>
	{
		LeastBits(void) = delete;

		using LeastType = uint_least64_t;
		using FastType = uint_fast64_t;
		using LeastSignedType = int_least64_t;
		using FastSignedType = int_fast64_t;
	};

	template< unsigned Bits >
	using LeastType = typename LeastBits< Bits >::LeastType;

	template< unsigned Bits >
	using FastType = typename LeastBits< Bits >::FastType;

	template< unsigned Bits >
	using LeastSignedType = typename LeastBits< Bits >::LeastSignedType;

	template< unsigned Bits >
	using FastSignedType = typename LeastBits< Bits >::FastSignedType;
}
