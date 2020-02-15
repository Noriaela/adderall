#pragma once

#include <windows.h>
#include <iostream>
#include <cstdint>
#include <memory>
#include <vector>
#include <thread>
#include <chrono>
#include <array>
#include <fstream>
#include <istream>
#include <unordered_map>
#include <intrin.h>

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

// Utilities
#include "utilities/fnv.hpp"
#include "utilities/utilities.hpp"
#include "utilities/render.hpp"
#include "utilities/netvar_manager.hpp"

// Interfaces
#include "interfaces/interfaces.hpp"

// SDK
#include "../source-sdk/sdk.hpp"

// Hooks
#include "utilities/hook.hpp"
#include "../core/hooks/hooks.hpp"

// Features
#include "../core/features/config.h"
#include "../core/features/aimbot/aimbot.h"
#include "../core/features/aimbot/autowall.h"
#include "../core/features/backtrack/backtrack.h"
#include "../core/features/misc/misc.h"
#include "../core/features/misc/movement.h"
#include "../core/features/skinchanger/glovechanger.h"
#include "../core/features/skinchanger/skinchanger.h"
#include "../core/features/visuals/nightmode.h"
#include "../core/features/visuals/visuals.h"