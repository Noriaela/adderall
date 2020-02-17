#pragma once

#include "../../dependencies/common_includes.hpp"

class c_movement {

public:
	void do_bhop(c_usercmd* cmd);
};

extern c_movement movement;