/* Name: Ty Schluter
* C++ 1st Semester 2023
* Lab 2 10-11AM 
* Description:This lab is designed to get you familiar output to the command prompt
using C++. You are to create a cylinder object (Class) that stores radius and height. The
class should include methods for calculating volume and surface area. Other methods
included should be get and set functions. In main.cpp, you should test the class with
hard coded values and output radius, height, volume and surface area of the cylinder.
*/

#include <iostream>
#include <iomanip>
#include "Header1.h"

const double Pi = 3.1415926; // This Pi variable is here so it can be an absolute constant for the entire code

int main()
{
	Cylinder c; // Calls the Cylinder class so the set and get functions can work

	c.setRadius(2.0);// This setRadius is here so the header file can be called, making the source file get called so the function "activates". Then I have to set the value making it able to be used for calculations
	c.setHeight(4.0);  // The same thing basically applies here as set radius.
	c.setCylinderVolume(); // Calls the function from the Source file 
	c.setCylinderSurfaceArea(); // Same
	std::cout << "Radius: " << c.getRadius() << std::endl; // Outputs the radius to the screen and outputs the value of radius
	std::cout << "Height: " << c.getHeight() << std::endl;// Outputs the height to the screen and thhe value of the height
	std::cout << "Pi: "<< Pi<< std::endl; // Outputs the Pi and the value of pi to the screen

	

	return 0; 
}
