//100653409 - Abisheik Thuraiyan || Individual Assignment 1 || Game Engine Design & Implementation
#include "SimpleClass.h"

//Sets position X value by getting float value from Unity project
float SimpleClass::setX(float x)
{
	posX = x;
	return x;
}

//Sets position Y value by getting float value from Unity project
float SimpleClass::setY(float y)
{
	posY = y;
	return y;
}

//Sets position Z value by getting float value from Unity project
float SimpleClass::setZ(float z)
{
	posZ = z;
	return z;
}

//Saves X,Y,Z position values to the text file that was named in the Unity C# script by converting floats to chars
void SimpleClass::SavePos(std::string file)
{
	std::string savePath = file;

	std::ofstream saveFile(savePath, std::ios::out, std::ios::binary);
	if (saveFile.is_open())
	{
		saveFile.write(reinterpret_cast<char*>(&posX), sizeof(posX));
		saveFile.write(reinterpret_cast<char*>(&posY), sizeof(posY));
		saveFile.write(reinterpret_cast<char*>(&posZ), sizeof(posZ));

		saveFile.close();
	}
}

//Reads X,Y,Z position values from the text file that was named in the Unity C# script
void SimpleClass::LoadPos(std::string file)
{
	std::string savePath = file;

	std::ifstream saveFile(savePath, std::ios::in, std::ios::binary);
	if (saveFile.is_open())
	{
		saveFile.read(reinterpret_cast<char*>(&posX), sizeof(posX));
		saveFile.read(reinterpret_cast<char*>(&posY), sizeof(posY));
		saveFile.read(reinterpret_cast<char*>(&posZ), sizeof(posZ));

		saveFile.close();
	}
}

//Gets X position value
float SimpleClass::getX()
{
	return posX;
}

//Gets Y position value
float SimpleClass::getY()
{
	return posY;
}

//Gets Z position value
float SimpleClass::getZ()
{
	return posZ;
}
