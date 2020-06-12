#pragma once
#include "ibaseclientdll.hpp"
#include "icliententitylist.hpp"
#include "ivengineclient.hpp"
#include "iclientmode.hpp"
#include "iclientstate.hpp"
#include "ipanel.hpp"
#include "isurface.hpp"
#include "cglobalvarsbase.hpp"
#include "imaterialsystem.hpp"
#include "ivmodelinfo.hpp"
#include "ivmodelrender.hpp"
#include "ivdebugoverlay.hpp"
#include "iconsole.hpp"
#include "ilocalize.hpp"
#include "igameeventmanager.hpp"
#include "iinputsystem.hpp"
#include "iinput.hpp"
#include "iveffects.hpp"

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

namespace interfaces {
	inline i_base_client_dll* client{ };
	inline i_input* input{ };
	inline i_client_entity_list* entity_list{ };
	inline iv_engine_client* engine{ };
	inline i_client_mode* clientmode{ };
	inline i_client_state* clientstate{ };
	inline i_panel* panel{ };
	inline i_surface* surface{ };
	inline c_global_vars_base* globals{ };
	inline i_material_system* material_system{ };
	inline iv_model_info* model_info{ };
	inline iv_model_render* model_render{ };
	inline void* render_view{ };
	inline iv_effects* effects{ };
	inline iv_debug_overlay* debug_overlay{ };
	inline i_console* console{ };
	inline i_localize* localize{ };
	inline i_game_event_manager* event_manager{ };
	inline i_inputsytem* inputsystem{ };
	inline IDirect3DDevice9* directx{ };

	void initialize( );
}