#include <string>
#include <fstream>
#include <stdio.h>
#include "cemx.h"

const std::string InfoFromDotFile::filename_ = ".cemxrc";

InfoFromDotFile::InfoFromDotFile() {
	std::ifstream read_file(filename_.c_str(), std::ios::in);

	if(!read_file) {
		std::string str = "";
		char buff[1024];
		FILE *fp = popen("where bash.exe", "r");
		while (fgets(buff, sizeof(buff), fp)) {
			str += buff;
		}
		pclose(fp);

		bash_path_ = str.substr(0, str.find("bash.exe") + 8);
		return;
	}

	//std::ifstream read_file(filename_.c_str(), std::ios::in);
	while(!read_file.eof()) {
		std::string str;
		std::getline(read_file, str);
		if(str.find("bash:") == 0) {
			bash_path_ = str.substr(5);
		}
	}
}

