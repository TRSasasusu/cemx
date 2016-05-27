#include <string>
#include <fstream>
#include <sys/stat.h>
#include <stdio.h>
#include "cemx.h"

const std::string InfoFromDotFile::filename_ = ".cemxrc";

InfoFromDotFile::InfoFromDotFile() {
	if(!IsDotFileExist()) {
		std::string str = "";
		char buff[1024];
		FILE *fp = popen("where bash.exe", "r");
		while (fgets(buff, sizeof(buff), fp)) {
			//printf("fgets: %s", str);
			str += buff;
		}
		pclose(fp);

		bash_path_ = str.substr(0, str.find("bash.exe") + 8);

		//bash_path_ = "c:\\msys64\\usr\\bin\\bash.exe\\";
		return;
	}

	std::ifstream read_file(filename_.c_str(), std::ios::in);
	while(!read_file.eof()) {
		std::string str;
		std::getline(read_file, str);
		if(str.find("bash:") == 0) {
			bash_path_ = str.substr(5);
		}
	}
}

bool InfoFromDotFile::IsDotFileExist() {
	struct stat info;
	return stat(filename_.c_str(), &info) == 0;
}
