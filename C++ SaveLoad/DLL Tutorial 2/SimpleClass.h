//100653409 - Abisheik Thuraiyan || Individual Assignment 1 || Game Engine Design & Implementation
#pragma once

#include "PluginSettings.h"

#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

class PLUGIN_API SimpleClass
{
public:
	//Function to save position
	void SavePos(std::string file);

	//Function to load position
	void LoadPos(std::string file);

	//Set position on X axis
	float setX(float x);

	//Set position on Y axis
	float setY(float y);

	//Set position on Z axis
	float setZ(float z);

	//Init position value on X axis
	float posX = 0.0f;

	//Init position value on Y axis
	float posY = 0.0f;

	//Init position value Z axis
	float posZ = 0.0f;
	
	//Get position value on X axis
	float getX();

	//Get position value on Y axis
	float getY();

	//Get position value on Z axis
	float getZ();
};
