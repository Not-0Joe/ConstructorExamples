#ifndef SECOND_CLASS_EXAMPLE_H
#define	SECOND_CLASS_EXAMPLE_H

class ClassExampleSecond
{
public:

	// using defualt, explicity defualted constructor
	ClassExampleSecond() = default;
	// overload using constructor delegation
	ClassExampleSecond(int x) : ClassExampleSecond{ x, 0 } {}
	// constructor using member initlizer list to init private members
	ClassExampleSecond(int x, int y) : m_x{ x }, m_y{ y } {}

	// constructors can delegate or initialize, but not both.


private:
	int m_x = 0;
	int m_y = 0;
};

#endif // ! SECOND_CLASS_EXAMPLE_H
