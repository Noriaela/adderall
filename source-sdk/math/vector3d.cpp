#include "vector3d.hpp"
#include <cmath>

vec3_t::vec3_t( void ) {
	x = y = z = 0.0f;
}

vec3_t::vec3_t( float fx, float fy, float fz ) {
	x = fx;
	y = fy;
	z = fz;
}

vec3_t::~vec3_t( void ) {

};

void vec3_t::clamp( void ) {
	x = clip_number( x, -89.0f, 89.0f );
	y = clip_number( std::remainder( y, 360.0f ), -180.0f, 180.0f );
	z = clip_number( z, -50.0f, 50.0f );
}

void vec3_t::normalize( void ) {
	auto vec_normalize = [ & ] ( vec3_t& v ) {
		auto l = v.length( );

		if ( l != 0.0f ) {
			v.x /= l;
			v.y /= l;
			v.z /= l;
		}
		else {
			v.x = v.y = 0.0f; v.z = 1.0f;
		}

		return l;
	};

	vec_normalize( *this );
}

vec3_t vec3_t::normalized( void ) {
	vec3_t vec( *this );
	vec.normalize( );

	return vec;
}

float vec3_t::length( void ) {
	float root = 0.0f, sqsr = this->length_sqr( );

	__asm        sqrtss xmm0, sqsr
	__asm        movss root, xmm0

	return root;
}

float vec3_t::length_sqr( void ) {
	auto sqr = [ ] ( float n ) {
		return static_cast< float >( n * n );
	};

	return ( sqr( x ) + sqr( y ) + sqr( z ) );
}

float vec3_t::dot( const vec3_t other ) {
	return ( x * other.x + y * other.y + z * other.z );
}