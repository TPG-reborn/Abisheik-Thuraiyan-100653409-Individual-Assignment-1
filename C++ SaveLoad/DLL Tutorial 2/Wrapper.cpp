//100653409 - Abisheik Thuraiyan || Individual Assignment 1 || Game Engine Design & Implementation
#include "Wrapper.h"

SimpleClass simpleClass;

PLUGIN_API void SavePos(char* file)
{
	return simpleClass.SavePos(std::string(file));
}

PLUGIN_API void LoadPos(char* file)
{
	return simpleClass.LoadPos(std::string(file));
}

PLUGIN_API float setX(float x)
{
	return simpleClass.setX(float(x));
}

PLUGIN_API float setY(float y)
{
	return simpleClass.setY(float(y));
}

PLUGIN_API float setZ(float z)
{
	return simpleClass.setZ(float(z));
}

PLUGIN_API float getX()
{
	return simpleClass.getX();
}

PLUGIN_API float getY()
{
	return simpleClass.getY();
}

PLUGIN_API float getZ()
{
	return simpleClass.getZ();
}
