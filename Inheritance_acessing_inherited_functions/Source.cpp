#include <iostream>

class A
{
	int callA;
	void inc()
	{
		callA++;
	}
public:
	A()
	{
		callA = 0;
	}
	int getA()
	{
		return callA;
	}
protected:
	void func(int& a)
	{
		a = a * 2;
		inc();
	}
};

class B
{
	int callB;
	void inc()
	{
		callB++;
	}
public:
	B()
	{
		callB = 0;
	}
	int getB()
	{
		return callB;
	}
protected:
	void func(int& a)
	{
		a = a * 3;
		inc();
	}
};

class C
{
	int callC;
	void inc()
	{
		callC++;
	}
public:
	C()
	{
		callC = 0;
	}
	int getC()
	{
		return callC;
	}
protected:
	void func(int& a)
	{
		a = a * 5;
		inc();
	}
};

class D : public A, B, C
{
	int val;
public:
	D()
	{
		val = 1;
	}
	void update_val(int new_val)
	{
		int temp = new_val;
		A::func(val);
		//temp = new_val / 2;
		B::func(val);
		//temp = new_val / 3;
		C::func(val);
		//temp = new_val / 5;
		
	}
	void check(int);
};

void D::check(int new_val)
{
	update_val(new_val);
	std:: cout << "Value = " << val << std::endl << "A's func called " << getA() << " times " << std::endl << "B's func called " << getB() << " times" << std::endl << "C's func called " << getC() << " times" << std::endl;
}

int main()
{
    D d;
	int new_val;
	std::cin >> new_val;
	d.check(new_val);
	return 0;
}