#include "OriginFile.hpp"

OriginFile::OriginFile()
{
}

OriginFile::~OriginFile()
{
}

void	OriginFile::SetOriginFileName(char *name)
{
	origin_file_name = name;
}

void	OriginFile::SetOriginFile()
{
	origin_file.open(origin_file_name);
	if (!origin_file.is_open())
	{
		std::cout << "error: failed open file." << std::endl;
		exit(1);
	}
}

int	OriginFile::CheckEOF()
{
	if (origin_file.eof())
		return (1);
	else
		return (0);
}

void	OriginFile::GetStringInFile(std::string &str)
{
	std::getline(origin_file, str);
}

void	OriginFile::CloseOriginFile()
{
	origin_file.close();
}