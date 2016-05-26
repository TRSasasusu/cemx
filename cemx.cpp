#include <iostream>
#include <string.h>
#include "cemx.h"

void help() {
	std::cout << "usage: cemx [options]" << std::endl;
	std::cout << "Options:" << std::endl;
	std::cout << "  --help            Display this information" << std::endl;
	std::cout << "  \%                 Split horizontally" << std::endl;
	std::cout << "  \"                 Split vertically" << std::endl;
}

int main(int argc, char *argv[]) {
	InfoFromDotFile info_from_dot_file;

	if(argc == 1) {
		OpenPane::OpenBash(info_from_dot_file.GetBashPath(), "");
	}
	else if(argc == 2) {
		if(strcmp(argv[1], "--help") == 0) {
			help();
		}
		else {
			OpenPane::OpenBash(info_from_dot_file.GetBashPath(), argv[1]);
		}
	}
	else {
		help();
	}

	return 0;
}
