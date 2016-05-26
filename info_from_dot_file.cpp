#include <string>
#include <sys/stat.h>
#include "cemx.h"

const std::string InfoFromDotFile::filename = ".cemxrc";

InfoFromDotFile::InfoFromDotFile() {
	if(!IsDotFileExist()) {
		return;
	}

	
}

bool InfoFromDotFile::IsDotFileExist() {
	struct stat info;
	return stat(filename.c_str(), &info) == 0;
}
