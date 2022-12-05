#include<iostream>
#include<string>
#include<windows.h>

int function(std::string temp, int forbidden_length) {
	if (forbidden_length == temp.length()) {
		throw forbidden_length;
	}
	else {
		return temp.length();
	}
}

int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length,
		tempNum;
	std::string tempStr;
	bool flag = true;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	
	do {
		try
		{
			std::cout << "Введите слово: ";
			std::cin >> tempStr;
			tempNum = function(tempStr, forbidden_length);
			std::cout << "Длина слова " << '"' << tempStr << '"' << " равна " << tempNum << std::endl;
		}
		catch (const int bad_length)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания!" << std::endl;
			flag = false;
		}
	} while (flag);

	return 0;
}