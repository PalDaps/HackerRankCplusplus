#include <iostream>
#include <sstream>

class Student
{
private:
	int age, standard;
	std::string first_name, last_name;
	int to_int()
	{

	}
public:
	void set_age(int value)
	{
		this->age = value;
	}
	void set_standard(int value)
	{
		this->standard = value;
	}
	void set_first_name(std::string value)
	{
		this->first_name = value;
	}
	void set_last_name(std::string value)
	{
		this->last_name = value;
	}
	int get_age()
	{
		return this->age;
	}
	int get_standard()
	{
		return this->standard;
	}
	std::string get_first_name()
	{
		return this->first_name;
	}
	std::string get_last_name()
	{
		return this->last_name;
	}
	std::string to_string()
	{
		std::stringstream to_string_ss;
		to_string_ss << age << ", " << first_name << ", " << last_name << ", " << standard;
		return to_string_ss.str();
	}
};

int main()
{
	int age, standard;
	std::string first_name, last_name;
	std::cin >> age >> first_name >> last_name >> standard;

	Student Daps;
	Daps.set_age(age);
	Daps.set_standard(standard);
	Daps.set_first_name(first_name);
	Daps.set_last_name(last_name);

	std::cout << Daps.get_age() << "\n";
	std::cout << Daps.get_last_name() << ", " << Daps.get_first_name() << "\n";
	std::cout << Daps.get_standard() << "\n";
	std::cout << "\n";
	std::cout << Daps.to_string();
	return 0;
}
