#include"framework.h"

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	Greeter My;
	std::cout << My.greet(name) << std::endl;
	return EXIT_SUCCESS;
}