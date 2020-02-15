#include "menu.hpp"

c_menu g_menu;

void c_menu::render( ) {

	zgui::poll_input( "Counter-Strike: Global Offensive" );

	if ( zgui::begin_window( "adderall", { 500, 350 }, render::main_font ) ) {
		zgui::begin_groupbox( "main group", { 468, 311 } );
		{
			zgui::checkbox( "bunny hop", set.do_bhop );
			//zgui::slider_float( "Example slider (float)", 0.0f, 100.0f, sliderf );
			//zgui::slider_int( "Example slider (int)", 0, 100, slideri );
			//zgui::combobox( "Example dropdown", { "aaaa", "bbbb", "cccc", "dddd" }, dropdown );
		}
		zgui::end_groupbox( );

		zgui::end_window( );
	}
}