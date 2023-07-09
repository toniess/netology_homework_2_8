#include <iostream>
#include <windows.h>

class bad_length : public std::exception 
{
public:
	bad_length(const char* a) : std::exception(a) {};
};

int function(std::string str, int forbidden_length)  throw (bad_length)
{
	int length = str.length();
	if (length == forbidden_length)
		throw bad_length("forbidden string length");
	return length;
}


int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	while (true)
	{
		std::string word;
		std::cout << "Введите слово: ";
		std::cin >> word;
		try
		{
			std::cout << "Длина слова \"" << word << "\" равна " << function(word, forbidden_length) << std::endl;
		}
		catch (const bad_length)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
			return 0;
		}
	}
}