#ifndef ORIGINFILE_HPP
# define ORIGINFILE_HPP

# include <iostream>
# include <fstream>
# include <stdlib.h>

class OriginFile
{
	private:
		std::ifstream	origin_file;
		std::string		origin_file_name;
	public:
		OriginFile();
		~OriginFile();
		void	SetOriginFileName(char *name);
		void	SetOriginFile();
		int		CheckEOF();
		void	GetStringInFile(std::string &str);
		void	CloseOriginFile();
};

#endif