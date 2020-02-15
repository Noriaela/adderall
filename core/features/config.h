#pragma once

class c_settings
{
public:
	bool menu_opened = false;

	// aimbot
	bool do_aimbot = false;

	// anti-aim
	bool do_antiaim = false;

	// backtrack

	// misc
	bool do_bhop = false;

	// skinchanger
	bool skinchanger_enable{ false };
	bool glovechanger_enabled = false;

	// visuals
	bool do_visuals = false;

	// colors

};

extern c_settings set;