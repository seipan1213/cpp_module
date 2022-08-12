#include <iostream>
#include <fstream>

void replace(std::ifstream &input, std::ofstream &output, std::string s1, std::string s2)
{
	std::string str;

	while (std::getline(input, str, '\n'))
	{
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!str.compare(i, s1.length(), s1))
			{
				str.erase(i, s1.length());
				str.insert(i, s2);
				i += s2.length() - 1;
			}
		}
		output << str << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: ARGS" << std::endl;
		return (0);
	}

	std::string s1 = argv[1];
	std::string s2 = argv[2];
	std::string in_file_name = argv[3];
	std::string out_file_name = in_file_name + ".replace";

	if (s1.empty())
	{
		std::cout << "Error: Invalid Value s1" << std::endl;
		return (0);
	}

	std::ifstream input(in_file_name.c_str());
	if (!input)
	{
		std::cout << "Error: file not found" << std::endl;
		return (0);
	}

	std::ofstream output(out_file_name.c_str());
	if (!output)
	{
		input.close();
		std::cout << "Error: cant output" << std::endl;
		return (0);
	}

	replace(input, output, s1, s2);

	input.close();
	output.close();
}
