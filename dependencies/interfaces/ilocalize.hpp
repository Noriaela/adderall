#pragma once

class i_localize {
public:
	constexpr wchar_t* find( const char* token_name ) {
		using original_fn = wchar_t*( __thiscall* )( i_localize*, const char* );
		return ( *( original_fn** ) this ) [ 11 ]( this, token_name );
	}
};