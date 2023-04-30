#include <iostream>

class Box
{
	int l;
	int b;
	int h;
public:
	Box() : l(0), b(0), h(0)
	{

	};
	Box(int l, int b, int h) : l(l), b(b), h(h)
	{

	}
	int getLength()
	{
		return l;
	}
	int getBreadth()
	{
		return b;
	}
	int getHeight()
	{
		return h;
	}
	long long CalculateVolume()
	{
		return static_cast<long long>(l)* b* h;
	}

	bool operator < (Box & other )
	{
		return (this->l < other.l) || (this->b < other.b&& this->l == other.l) || (this->h < other.h&& this->b == other.b && this->l == other.l);
	}
};

std::ostream& operator<< (std::ostream& out, Box& other)
{
	out << other.getLength() << " " << other.getBreadth() << " " << other.getHeight();
	return out;
}

int main()
{
	Box b1;
	// std::cout << b1.getBreadth() << std::endl;
	// Box b2(2, 4, 5);
	// std::cout << b2.CalculateVolume() << std::endl;
	// bool x = (b1 < b2);
	// std::cout << x;
	std::cout << b1; // the mistake
	return 0;
}