//100653409 - Abisheik Thuraiyan || Individual Assignment 1 || Game Engine Design & Implementation
#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"
#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API void SavePos(char* file);
	PLUGIN_API void LoadPos(char* file);

	PLUGIN_API float setX(float x);
	PLUGIN_API float setY(float y);
	PLUGIN_API float setZ(float z);

	PLUGIN_API float getX();
	PLUGIN_API float getY();
	PLUGIN_API float getZ();

#ifdef __cplusplus
}
#endif
