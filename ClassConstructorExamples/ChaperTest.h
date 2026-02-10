/*Question #1

Write a class named Ball. Ball should have two private member variables, one to hold a color (default value: black), and one to hold a radius
(default value: 10.0). Add 4 constructors, one to handle each case below:*/

/*
Ball def{};
Ball blue{ "blue" };
Ball twenty{ 20.0 };
Ball blueTwenty{ "blue", 20.0 };
	*/


#ifndef CHAPER_TEST_H
#define CHAPER_TEST_H

#include <string>

class Ball
{
public:

	// reconfigure this to reduce redundacy make use of default values for init

	Ball() = default;
	
	Ball(std::string color) : Ball{ color, 10.0 } { print(); }

	Ball(double radius) : Ball{"No Color Provided", radius} { print(); }

	Ball(std::string color, double radius) : m_color {color}, m_radius {radius} { print(); }


	void print() const
	{
		std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
	}

private:
	
	std::string m_color{ "Black" };
	double m_radius = 10.0;
};




#endif // !CHAPER_TEST_H

