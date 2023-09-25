#include <iostream>
#include <fstream>

class OriginFile
{
	private:
		std::ifstream	origin_file;
		std::string		origin_file_name;
	public:
		void	SetOriginFileName(char *name);
		void	SetOriginFile();
		int		CheckEOF();
		void	GetStringInFile(std::string &str);
		void	CloseOriginFile();
};