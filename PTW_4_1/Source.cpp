#include <iostream>
#include <fstream>
#include <string>

bool AnalyzeFile(const std::string &filename)
throw(std::invalid_argument);

int main()
{
	if (AnalyzeFile("1.txt"))
	{
		std::cout << "Yes.\n";
	}
	else
	{
		std::cout << "No.\n";
	}

	return 0;
}

bool AnalyzeFile(const std::string &filename)
throw(std::invalid_argument)
{
	std::ifstream read(filename);

	if (!read)
	{
		throw std::invalid_argument("Could not open \"" + filename + "\"");
	}

	std::string value;

	while (read >> value)
	{
		for (size_t elem = 0; elem < value.size() - 1; elem++)
		{
			if (value[elem] == 'n' &&
				value[elem + 1] == 'o' ||
				value[elem] == 'o' &&
				value[elem + 1] == 'n')
			{
				return true;
			}
		}
	}

	return false;
}
