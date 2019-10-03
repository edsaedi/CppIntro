#include <iostream>
#include <string>

using std::string;

int Add(int a, int b)
{
	return a + b;
}

void Sub(int &a, int b)
{
	a -= b;
}

int main()
{
	//string name = "";

	//std::cout << "Hello World!\nWhat is your name?" << std::endl;	
	//std::cin >> name;

	//std::cout << "Welcome " << name << std::endl;

	//Mad Libs
	/*string adj = "";
	string noun = "";
	string verb = "";
	string adverb = "";

	std::cout << "Enter in an adjective: ";
	std::cin >> adj;
	std::cout << "Enter in a noun: ";
	std::cin >> noun;
	std::cout << "Enter in a verb: ";
	std::cin >> verb;
	std::cout << "Enter in an adverb: ";
	std::cin >> adverb;

	std::cout << std::endl << "The " << adj << " " << noun << " " << adverb << " " << verb << " ";*/

	//Calculator
	int num1 = 0;
	int num2 = 0;
	char sign = ' ';
	bool correct = false;

	//int nums[5];
	//nums[0] = 5;


	int* nums = new int[5];
	nums[0] = 3;

	while (!correct)
	{
		correct = true;
		std::cout << "Give me a number: ";
		std::cin >> num1;
		std::cout << "Give me another number: ";
		std::cin >> num2;

		std::cout << "Give me a sign: ";
		std::cin >> sign;

		if (sign == '+')
		{
			std::cout << Add(num1, num2);
		}
		else if (sign == '-')
		{
			Sub(num1, num2);

			std::cout << num1;
		}
		else if (sign == '/')
		{
			if (num2 == 0)
			{
				correct = false;
			}
			else
			{
				std::cout << num1 / num2;
			}
		}
		else if (sign == '*')
		{
			std::cout << num1 * num2;
		}
		else
		{
			correct = false;
		}

	}
}