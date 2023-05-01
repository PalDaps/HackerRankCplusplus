#include <iostream>

class Triangle
{
public:
	void triangle()
	{
		std::cout << "I am triangle\n";
	}
};

class Isosceles : public Triangle
{
public:
	void isosceles()
	{
		std::cout << "I am isosceles triangle\n";
	}
	void description()
	{
		std::cout << "In an isosceles triangle two sides are equal\n";
	}
};

int main()
{
	Isosceles isc;
	isc.isosceles();
	isc.description();
	isc.triangle();
	

	return 0;
}