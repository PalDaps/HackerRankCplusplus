#include <iostream>
#include <vector>

class Student
{
private:
	std::vector<int> scores;
public:
	void input()
	{
		for (int i = 0; i < 5; i++)
		{ 
			int temp = 0;
			std::cin >> temp;
			scores.push_back(temp);
		}
	}
	void output()
	{
		for (int i = 0; i < 5; ++i)
		{
			std::cout << scores[i] << " ";
		}
		std::cout << std::endl;
	}
	int calculateTotalScore()
	{
		int sum = 0;
		for (int i = 0; i < 5; i++)
			sum = sum + scores[i];
		return sum;
	}
};

int main()
{
	// Student Daps;
	// Daps.input();
	// Daps.output();
	int n = 0; 
	std::cin >> n; // number of students
	Student* s = new Student[n];
	for (int i = 0; i < n; i++)
	{
		s[i].input();
	}
	int kristen_score = s[0].calculateTotalScore();
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		int total = s[i].calculateTotalScore();
		if (total > kristen_score)
		{
			count++;
		}

	}
	std::cout << count;
	delete[] s;
	return 0;
}