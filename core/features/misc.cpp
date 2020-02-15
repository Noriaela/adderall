#include "misc.h"

#include "../../dependencies/common_includes.hpp"

c_misc misc;

static bool should_jump = false;
static bool should_fake = false;

void c_misc::do_bhop(c_usercmd* cmd) {
	if (!set.do_bhop)
		return;

	auto local_player = reinterpret_cast<player_t*>(interfaces::entity_list->get_client_entity(interfaces::engine->get_local_player()));

	if (!local_player)
		return;
	
	if (local_player->move_type() == movetype_ladder || local_player->move_type() == movetype_noclip)
		return;

	if (should_fake && !should_jump) {
		cmd->buttons |= in_jump;
		should_fake = false;
	}
	else if (cmd->buttons & in_jump) {
		if (local_player->flags() & fl_onground) {
			should_fake = false;
			should_jump = false;
		}
		else {
			cmd->buttons &= ~in_jump;
			should_jump = false;
		}
	}
	else {
		should_jump = false;
		should_fake = false;
	}
}