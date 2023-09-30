#ifndef Cylinder_h
#define Cylinder_h

class Cylinder  // Creates the class of the Cylinder
{
public: // Creates the methods for the class 

	Cylinder(); // Creates the cylinder object
	~Cylinder(); // Destroys the cylinder object after being read and processed once


	void setRadius(float radius_); // Creates the function 
	float getRadius(); // Makes the ability to get the radius

	void setHeight(float height_); // Same as setHeight
	float getHeight(); // Same as getRadius

	void setCylinderVolume();
	float getCylinderVolume();

	void setCylinderSurfaceArea();
		float getCylinderSurfaceArea();
private:

	float radius;
	float height;
	float volume;
	float surfaceArea;
	

};


#endif 
