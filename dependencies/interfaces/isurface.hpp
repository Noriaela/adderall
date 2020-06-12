#pragma once
#include "../../source-sdk/structs/vertex_t.hpp"

class i_surface {
public:
	constexpr void set_drawing_color( int r, int g, int b, int a = 255 ) {
		using original_fn = void( __thiscall* )( i_surface*, int, int, int, int );
		return ( *( original_fn** ) this )[ 15 ]( this, r, g, b, a );
	}
	constexpr void set_text_color( int r, int g, int b, int a = 255 ) {
		using original_fn = void( __thiscall* )( i_surface*, int, int, int, int );
		return ( *( original_fn** ) this )[ 25 ]( this, r, g, b, a );
	}
	constexpr void draw_polygon( int n, vertex_t *vertice, bool clip_vertices = true ) {
		using original_fn = void( __thiscall* )( i_surface*, int, vertex_t*, bool );
		return ( *( original_fn** ) this )[ 106 ]( this, n, vertice, clip_vertices );
	}
	constexpr void draw_filled_rectangle( int x, int y, int x1, int y1 ) {
		using original_fn = void( __thiscall* )( i_surface*, int, int, int, int );
		return ( *( original_fn** ) this )[ 16 ]( this, x, y, x + x1, y + y1 );
	}
	constexpr void set_texture( int id ) {
		using original_fn = void( __thiscall* )( i_surface*, int );
		return ( *( original_fn** ) this )[ 38 ]( this, id );
	}
	constexpr void set_texture_rgba( int id, const unsigned char *rgba, int wide, int tall ) {
		using original_fn = void( __thiscall* )( i_surface*, int, const unsigned char *, int, int, int, bool );
		return ( *( original_fn** ) this )[ 37 ]( this, id, rgba, wide, tall, 0, false );
	}
	constexpr int create_new_texture_id( bool procedural = false ) {
		using original_fn = int( __thiscall* )( i_surface*, bool );
		return ( *( original_fn** ) this )[ 43 ]( this, procedural );
	}
	constexpr void draw_outlined_rect( int x, int y, int x1, int y1 ) {
		using original_fn = void( __thiscall* )( i_surface*, int, int, int, int );
		return ( *( original_fn** ) this )[ 18 ]( this, x, y, x + x1, y+y1);
	}
	constexpr void draw_line( int x1, int y1, int x2, int y2 ) {
		using original_fn = void( __thiscall* )( i_surface*, int, int, int, int );
		return ( *( original_fn** ) this )[ 19 ]( this, x1, y1, x2, y2 );
	}
	constexpr void draw_text_font( unsigned long font ) {
		using original_fn = void( __thiscall* )( i_surface*, unsigned long );
		return ( *( original_fn** ) this )[ 23 ]( this, font );
	}
	constexpr void draw_text_pos( int x, int y ) {
		using original_fn = void( __thiscall* )( i_surface*, int, int );
		return ( *( original_fn** ) this )[ 26 ]( this, x, y );
	}
	constexpr void draw_render_text( const wchar_t* text, int textLen ) {
		using original_fn = void( __thiscall* )( i_surface*, const wchar_t*, int, int );
		return ( *( original_fn** ) this )[ 28 ]( this, text, textLen, 0 );
	}
	constexpr unsigned long font_create( ) {
		using original_fn = unsigned int( __thiscall* )( i_surface* );
		return ( *( original_fn** ) this )[ 71 ]( this );
	}
	constexpr void set_font_glyph( unsigned long font, const char* windowsFontName, int tall, int weight, int blur, int scanlines, int flags ) {
		using original_fn = void( __thiscall* )( i_surface*, unsigned long, const char*, int, int, int, int, int, int, int );
		return ( *( original_fn** ) this )[ 72 ]( this, font, windowsFontName, tall, weight, blur, scanlines, flags, 0, 0 );
	}
	constexpr void get_text_size( unsigned long font, const wchar_t* text, int& wide, int& tall ) {
		using original_fn = void( __thiscall* )( i_surface*, unsigned long, const wchar_t*, int&, int& );
		return ( *( original_fn** ) this )[ 79 ]( this, font, text, wide, tall );
	}
	constexpr void unlock_cursor() {
		using original_fn = void(__thiscall*)(i_surface*);
		return (*(original_fn * *)this)[66](this);
	}
};