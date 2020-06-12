#include "menu.hpp"

static bool test_checkbox;
static int test_int;

void c_menu::render() {

	zgui::poll_input("Counter-Strike: Global Offensive");

	if (zgui::begin_window("adderall", { 500, 350 }, render::main_font)) {
		zgui::begin_groupbox("aimbot", { 225, 150 });
		{
			zgui::checkbox("bunny hop", test_checkbox);
			zgui::slider_int("viewmodel fov #1", 0, 135, test_int);
		}
		zgui::end_groupbox();

		zgui::begin_groupbox("visuals", { 225, 150 });
		{
			zgui::checkbox("bunny hop", test_checkbox);
			zgui::slider_int("viewmodel fov #2", 0, 135, test_int);
		}
		zgui::end_groupbox();

		zgui::next_column(245, 0); // DONT TOUCH

		zgui::begin_groupbox("skins", { 225, 150 });
		{
			zgui::checkbox("bunny hop", test_checkbox);
			zgui::slider_int("viewmodel fov #3", 0, 135, test_int);
		}
		zgui::end_groupbox();

		zgui::begin_groupbox("misc", { 225, 150 });
		{
			zgui::checkbox("bunny hop", test_checkbox);
			zgui::slider_int("viewmodel fov #4", 0, 135, test_int);
		}
		zgui::end_groupbox();

		zgui::end_window();
	}
}