#ifndef RESULTFILE_HPP
# define RESULTFILE_HPP

# include <iostream>
# include <fstream>

class ResultFile
{
	private:
		std::ofstream	result_file;
		std::string		result_file_name;
		std::string		find_str;
		std::string		change_str;
	public:
		ResultFile();
		~ResultFile();
		void	SetResultFileName(char *name);
		void	SetResultFile();
		void	SetFindString(char *find);
		void	SetChangeString(char *change);
		void	WriteFile(std::string str_origin, int eof);
		void	CloseResultFile();
};

#endif