#include <string>
#include "Timer.h"

/*
	Solution to Project Euler problem 4 in C++
	Copyright (c) Michal Maksymow. All rights reserved. No warranty.
*/

/* Checks if given integer is a palindrome by comparing first to last, second
to last - 1 and so on... */
bool isPalindrome(int x)
{
	std::string number = std::to_string(x);
	for (int i = 0; i < number.length() / 2; i++)
	{
		if (number.at(i) != number.at(number.length() - (i + 1)))
			return false;
	}
	return true;
}

int main()
{
	Timer timer;

	int max {};
	int result {};

	/* Iterates through possible results and check if they are palindromes */
	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			result = i * j;
			if (isPalindrome(result) && result > max)
			{
				max = result;
			}
		}
	}

	std::cout << "Problem 4: " << max << std::endl;

	return 0;
}