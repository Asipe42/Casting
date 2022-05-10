#pragma once
#include <string>
#include <cmath>

using namespace std;

string my_to_string(int input)
{
	string result = "";
	int num = 0;

	while (input > 0)
	{
		num = input % 10; // ���� ���� �ڸ��� ���ں��� ����
		result += (char)(num + '0'); // 1 + '0' = '1';

		input /= 10; // ���� ���� �ڸ� ���� ���ں��� ����
	}

	reverse(result.begin(), result.end());

	return result;
}