#pragma once

extern "C" {
#include "Vendor/LUA/include/lua.h"
#include "Vendor/LUA/include/lualib.h"
#include "Vendor/LUA/include/lauxlib.h"
}

#include "ECS/Base/BaseSystem.h"
#include "ECS/Base/EntityManager.h"

#include "ECS/Components/LuaScript.h"

#include "Timer/Timer.h"
#include "ECS/Components/CsScript.h"

#include "ECS/Components/EntityName.h"

#include "Timer/Timer.h"

#include "pch.h"

class LuaSystem : public ECS::BaseSystem {
public:
	void Start() override {
		for (auto entity : entities) {
			auto& script = ECS::Manager.GetComponent<LuaScript>(entity);
			//OpenFile(script.FileName);
		}
	}


	// LUA

	/*
	bool CheckLua(lua_State* L, int r)
	{
		if (r != LUA_OK)

		{
			std::string errormsg = lua_tostring(L, -1);
			std::cout << errormsg << std::endl;
			return false;
		}
		return true;
	}

	lua_State* L = luaL_newstate();

	void OpenFile(std::string file) {
		luaL_openlibs(L);


		if (CheckLua(L, luaL_dofile(L, file.c_str()))) {
			lua_getglobal(L, "Update");
			if (lua_isfunction(L, -1))
			{
				float deltatime = Timer.DeltaTime();
				lua_pushnumber(L, deltatime);
				lua_pushnumber(L, 6.0f);
				if (CheckLua(L, lua_pcall(L, 2, 1, 0)))
				{

				}
			}
		}
	}
	\*/

};