#include "OriginFile.hpp"
#include "ResultFile.hpp"

int main(int argc, char **argv)
{
	OriginFile	origin_file;
	ResultFile	result_file;

	if (argc != 4)
		return (1);

	origin_file.SetOriginFileName(argv[1]);
	origin_file.SetOriginFile();

	result_file.SetResultFileName(argv[1]);
	result_file.SetResultFile();
	result_file.SetFindString(argv[2]);
	result_file.SetChangeString(argv[3]);

	while (!origin_file.CheckEOF())
	{
		std::string	str;
		origin_file.GetStringInFile(str);
		result_file.WriteFile(str, origin_file.CheckEOF());
	}

	origin_file.CloseOriginFile();
	result_file.CloseResultFile();
	return (0);
}