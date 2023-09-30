#include <iostream>
#include "Header1.h"
#include <iomanip>

const double Pi = 3.141592; // Constant through out and same as main

Cylinder::Cylinder() // This function creates and hard codes the values of radius and height, and sets them for the set and get functions
{
	radius = 0; // sets as original stuff
	height = 0;
}

Cylinder::~Cylinder() // Destroys Cylinder Object
{
}

void Cylinder::setRadius(float radius_)  // This function, from what I can assume, first it makes sure the variable is a float type and then sets the radius equal to 'radius_' making it a float?
{
	radius = radius_;
}

float Cylinder::getRadius() // Makes you able to have a thing so you can type it into a cout statment?
{
	return radius;
}

void Cylinder::setHeight(float height_) //  the same as  radius_
{
	height = height_;
}

float Cylinder::getHeight() // same as getRadius
{
	return height;
}


void Cylinder::setCylinderVolume() // Creates the function Cylinder Volume with no type due to the void
{ //The reason why the parenthesis are empty for the Volume and Surface Area is because we do not know the volume and surface area
	std::cout << "Volume of Cylinder: " << std::setprecision(6) << getRadius() * getRadius() * getHeight() * Pi << std::endl; // The formula for surface area
} //^^^^ Calculates the volume from the volume equation and gets its numbers from the set data in the main file.

float Cylinder::getCylinderVolume()
{
	return volume;
}

void Cylinder::setCylinderSurfaceArea() // Creates the function Cylinder Surface Area with no type due to the void
{
	std::cout << std::setprecision(6) << "Surface Area of Cylinder: " << 2 * getRadius() * getHeight() * Pi + 2 * getRadius() * getRadius() * Pi << std::endl;
} // Same as volume but different formula

float Cylinder::getCylinderSurfaceArea()
{
	return surfaceArea;
}

