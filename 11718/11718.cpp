/*
	백준 알고리즘 11718번: 그대로 출력하기
*/

#include <string>
#include <iostream>

int main()
{
	std::string str;
	while (true)
	{
		std::getline(std::cin, str);
		if (str == "")
			break;
		std::cout << str << std::endl;
	}
	return 0;
}