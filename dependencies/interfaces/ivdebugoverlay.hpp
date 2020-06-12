#pragma once
#include "../../source-sdk/math/vector3d.hpp"

class iv_debug_overlay {
public:
	// if you want to make your esp in d3d you'll have to calculate w2s urself with viewmatrix, keep that in mind
	// for some help, you can always refer to https://github.com/cristeigabriel/gosdk
	constexpr bool world_to_screen( const vec3_t& in, vec3_t& out ) {
		using original_fn = int( __thiscall* )( iv_debug_overlay*, const vec3_t&, vec3_t& );
		int return_value = ( *( original_fn** ) this ) [ 13 ]( this, in, out );
		return static_cast< bool >( return_value != 1 );
	}
};