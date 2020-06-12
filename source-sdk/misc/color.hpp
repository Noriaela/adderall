#pragma once
#include <cstdint>
#include <d3d9.h>

struct color {
	int a, r, g, b;
	color( ) = default;
	constexpr color(int r, int g, int b, int a = 255) : r(r), g(g), b(b), a(a) { }
	constexpr color( uint32_t color ) : a((color >> 24) & 0xff), r((color >> 16) & 0xff), g((color >> 8) & 0xff), b((color & 0xff)) { }
	constexpr color from_uint( uint32_t uint ) {
		return color( uint );
	}
	constexpr D3DCOLOR from_color( color col ) {
		return D3DCOLOR_ARGB( col.a, col.r, col.g, col.b );
	}
};