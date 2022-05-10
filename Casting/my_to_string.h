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
		num = input % 10; // 가장 낮은 자리의 숫자부터 추출
		result += (char)(num + '0'); // 1 + '0' = '1';

		input /= 10; // 가장 낮은 자릿 수의 숫자부터 제거
	}

	reverse(result.begin(), result.end());

	return result;
}