#include <iostream>
#include <vector>

class Person
{
protected:
	std::string name;
	int age;
	// static int cur_id;
public:
	Person()
	{
		// cur_id++;
	}
	virtual void getdata()
	{
		std::cin >> name >> age;
	}
	virtual void putdata()
	{
		std::cout << name << " " << age << " ";
	}
};

// int Person::cur_id = 0;

class Professor : public Person
{
	int publications;
	static int counter;
	int cur_id;
public:
	Professor()
	{
		counter++;
		cur_id = counter;
	}
	void getdata() override
	{
		Person::getdata();
		std::cin >> publications;
	}
	void putdata() override
	{
		Person::putdata();
		std::cout << publications << " " << cur_id << std::endl;
	}
};

int Professor::counter = 0;

class Student : public Person
{
	std::vector<int> marks;
	static int counter;
	int cur_id;
public:
	Student()
	{
		counter++;
		cur_id = counter;
	}
	void getdata() override
	{
		Person::getdata();
		for (int i = 0; i < 6; i++)
		{
			int temp = 0;
			std::cin >> temp;
			marks.push_back(temp);
		}
	}
	void putdata() override
	{
		Person::putdata();
		int sum = 0;
		for (int i = 0; i < marks.size(); i++)
		{
			sum = sum + marks[i];
		}
		std::cout << sum << " " << cur_id << std::endl;
	}
};

int Student::counter= 0;

int main()
{
	const int n = 4;
	int val;
	Person* per[n];
	// delete[] per;
	for (int i = 0; i < n; i++)
	{
		std::cin >> val;
		if (val == 1)
		{
			per[i] = new Professor;
		}
		else per[i] = new Student;

		per[i]->getdata();
	}
	for (int i = 0; i < n; i++)
		per[i]->putdata();

	for (int i = 0; i < n; i++)
	{
		delete per[i];
	}
	return 0;
}