#include <iostream>
#include <string>
#include <time.h>

using std::string;

int Add(int a, int b)
{
	return a + b;
}

void Sub(int& a, int b)
{
	a -= b;
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int array[], const int size)
{
	bool finished = false;
	while (!finished)
	{
		finished = true;
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				Swap(array[i], array[i + 1]);

				finished = false;
			}
		}
	}
}

void SelectionSort(int array[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				Swap(array[i], array[j]);
			}
		}
	}
}

void InsertionSort(int array[], const int size)
{
	int count = size;
	int done = 1;
	while (count > 0)
	{
		int done = size - count;
		while (done - 1 > -1 && array[done] < array[done - 1])
		{
			Swap(array[done], array[done - 1]);
			done--;
		}
		count--;
	}
}

int main()
{
	//Create a void function that swaps two numbers

	/*int a = 5;
	int b = 7;

	Swap(a, b);*/

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

	/*//Calculator
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

	}*/

	//srand(time(NULL));
	srand(26);

	//int randNum = rand() % 11; // 0-10
	//int randNum = rand() % 10 + 1 // 1-10
	const int size = 10;
	int array[size];

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 11;
		std::cout << array[i] << ", ";
	}

	std::cout << std::endl;

	//BubbleSort(array, size);
	//SelectionSort(array, size);
	InsertionSort(array, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << ", ";
	}
}

