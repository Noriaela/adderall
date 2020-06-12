#pragma once

class c_settings
{
public:

	class c_menu {
	public:
		bool menu_opened = false;
		int menu_toggle_key = VK_INSERT;
	}menu;

	class c_aimbot {
	public:
		bool aimbot_enabled;
	}aim;

	class c_antiaim {
	public:
		bool antiaim_enabled;
	}antiaim;
	
	class c_visuals {
	public:
		bool visuals_enabled;
	}vis;

	class c_misc {
	public:
		bool bhop;
		int viewmodel_fov;
	}misc;
	
	class c_colors {
	public:
		color t_box;
		color ct_box;
	}colors;

};

inline c_settings set{ };