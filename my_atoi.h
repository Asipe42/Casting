#pragma once
#include <string>
#include <cmath>

using namespace std;

int my_atoi(string input)
{
	int result = 0;

	for (int i = 0, j = input.length() - 1; i < input.length(); i++, j--)
	{
		result += pow(10, j) * (int)(input[i] - '0'); // '1' - '0' = 1
	}

	return result;
}