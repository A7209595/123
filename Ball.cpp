
#include "Ball.h"
#include <string>
// Construct a default Ball object
Ball::Ball()
{
	radius = 1;
}

// Construct a Ball object with specified radius
Ball::Ball(double radius)
{
	setRadius(radius);
}

Ball::Ball(double radius,const string& color)
{
	this->radius=radius;
	setColor(color);
}

// Return the radius of this Ball
double Ball::getRadius() const
{
	return radius;
}

// Set a new radius
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}


// Return the area of this Ball
double Ball::getArea() const
{
	return radius * radius * 3.14159 * 4;
}

double Ball::getVolume() const
{
	return radius *radius *radius * 4/3 *3.14159;
}


// Redefine the toString function
string Ball::toString() const
{
	return "Ball";
}