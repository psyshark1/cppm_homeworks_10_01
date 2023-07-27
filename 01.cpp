#include <iostream>

int main()
{	
	std::system("chcp 1251");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << name << std::endl;
	std::system("pause");
	return 0;
}