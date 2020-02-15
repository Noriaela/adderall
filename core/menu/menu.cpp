#include "menu.hpp"

c_menu g_menu;

void c_menu::render() {

	zgui::poll_input("Counter-Strike: Global Offensive");

	if (zgui::begin_window("adderall", { 500, 350 }, render::main_font)) {
		zgui::begin_groupbox("main group", { 468, 311 });
		{
			zgui::checkbox("bunny hop", set.do_bhop);
		}
		zgui::end_groupbox();

		zgui::end_window();
	}
}