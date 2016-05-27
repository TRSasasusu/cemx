#include <string>
#include <fstream>
#include <stdio.h>
#include <iostream>
#include "cemx.h"

const std::string InfoFromDotFile::filename_ = ".cemxrc";

InfoFromDotFile::InfoFromDotFile(std::string its_path) {
	std::ifstream read_file((its_path.substr(0, its_path.find("cemx.exe")) + filename_).c_str(), std::ios::in);

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

	while(!read_file.eof()) {
		std::string str;
		std::getline(read_file, str);
		if(str.find("bash:") == 0) {
			bash_path_ = str.substr(5);
		}
	}
}

