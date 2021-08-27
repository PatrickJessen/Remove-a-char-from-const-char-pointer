#include <iostream>

const int GetStringLength(const char* string)
{
	int counter = 0;
	for (const char* it = string; *it; it++)
		counter++;
	return counter;

}

const char* RemoveCharFromString(const char* string, char remove)
{
	char* temp = new char[GetStringLength(string)];

	for (int i = 0; i < GetStringLength(string); i++)
	{
		temp[i] = string[i];
	}

	int removeCounter = 0;
	for (int i = 0; i < GetStringLength(string); i++)
	{
		if (temp[i] == remove)
		{
			for (int j = i; j < GetStringLength(string); j++)
			{
				temp[j] = temp[j + 1];
			}
			removeCounter++;
		}
	}
	temp[GetStringLength(string) - removeCounter] = '\0';

	return temp;

}

int main()
{
	const char* test = "elephants";
	std::cout << GetStringLength(test) << "\n";
	std::cout << test << "\n";
	test = RemoveCharFromString(test, 'e');
	std::cout << test << "\n";
	std::cout << GetStringLength(test) << "\n";

	int f;
	std::cin >> f;

	delete test;
}