#pragma once

namespace hooks {
	inline vmt_hook client_hook{ };
	inline vmt_hook clientmode_hook{ };
	inline vmt_hook panel_hook{ };
	inline vmt_hook renderview_hook{ };
	inline vmt_hook surface_hook{ };
	inline WNDPROC wndproc_original{ };

	void initialize( );
	void shutdown( );

	using create_move_fn = bool( __thiscall* )( i_client_mode*, float, c_usercmd* );
	using frame_stage_notify_fn = void( __thiscall* )( i_base_client_dll*, int );
	using paint_traverse_fn = void( __thiscall* )( i_panel*, unsigned int, bool, bool );
	using scene_end_fn = void( __thiscall* )( void* );
	using lock_cursor_fn = void(__thiscall*)(void*);

	static bool __stdcall create_move( float frame_time, c_usercmd* cmd );
	static float __stdcall viewmodel_fov();
	static void __stdcall frame_stage_notify( int frame_stage );
	static void __stdcall paint_traverse( unsigned int panel, bool force_repaint, bool allow_force );
	static void __stdcall scene_end( );
	static void __stdcall lock_cursor();
	static LRESULT __stdcall wndproc( HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam );
}