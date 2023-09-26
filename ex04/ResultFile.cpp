#include "ResultFile.hpp"

ResultFile::ResultFile()
{
}

ResultFile::~ResultFile()
{
}

void	ResultFile::SetResultFileName(char *name)
{
	std::string	name_temp;

	name_temp = name;
	name_temp.append(".replace");
	result_file_name = name_temp;
}

void	ResultFile::SetResultFile()
{
	result_file.open(result_file_name.c_str());
	if (!result_file.is_open())
	{
		std::cout << "error: failed create file." << std::endl;
		exit(1);
	}
}

void	ResultFile::SetFindString(char *find)
{
	find_str = find;
}

void	ResultFile::SetChangeString(char *change)
{
	change_str = change;
}

void	ResultFile::WriteFile(std::string str, int eof)
{
	std::size_t	found;

	if (find_str != "")
	{
		while (1)
		{
			found = str.find(find_str);
			if (found == std::string::npos)
				break ;
			str.erase(found, find_str.size());
			str.insert(found, change_str);
		}
	}
	result_file.write(str.c_str(), str.size());
	if (!eof)
		result_file.write("\n", 1);
}

void	ResultFile::CloseResultFile()
{
	result_file.close();
}