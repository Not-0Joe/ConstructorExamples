#ifndef CLASS_EXAMPLE_FIRST_H
#define CLASS_EXAMPLE_FIRST_H

#include <iostream>

class ClassExampleFirst
{
public:

	// defualt constructor using constructor delegation
	ClassExampleFirst() : ClassExampleFirst{ 0,0 }
	{
		std::cout << "Defualt arg constructor called\n";
	}

	// overload
	ClassExampleFirst(int a) : ClassExampleFirst{ a,0 }
	{
		std::cout << "Single arg constructor called\n";
	}

	// using member init list
	ClassExampleFirst(int a, int b) : m_a{ a }, m_b{ b }
	{
		std::cout << "Double arg constructor called\n";
	}

	// setter 
	void setA(int a)
	{
		this->m_a = a;
	}

	void setB(int b)
	{
		this->m_b = b;
	}

	// inspectors
	void printA() const
	{
		std::cout << m_a << "\n";
	}

	void printB() const
	{
		std::cout << m_b << "\n";
	}

	// getters
	int getA() const
	{
		return m_a;
	}

	int getB() const
	{
		return m_b;
	}

	// member functions for user
	void getSum() const
	{
		int sum = m_a + m_b;
		std::cout << "A = " << m_a << "\n";
		std::cout << "B = " << m_b << "\n";
		std::cout << "SUM = " << sum << "\n";
	}

private:

	int m_a = 0;
	int m_b = 0;

};

#endif // !CLASS_EXAMPLE_FIRST
