#include <iostream>
#include <string.h>
#include "cemx.h"

void help() {
	std::cout << "Usage: cemx [options]" << std::endl;
	std::cout << "Options:" << std::endl;
	std::cout << "  --help            Display this information" << std::endl;
	std::cout << "  s                 Split horizontally" << std::endl;
	std::cout << "  sV                Split vertically" << std::endl;
	std::cout << "Please see other examples in ConEmu official website, https://conemu.github.io/en/NewConsole.html" << std::endl;
}

int main(int argc, char *argv[]) {
	InfoFromDotFile info_from_dot_file(argv[0]);

	if(argc == 1) {
		OpenPane::OpenBash(info_from_dot_file.GetBashPath(), "");
	}
	else if(argc == 2) {
		if(strcmp(argv[1], "--help") == 0) {
			help();
		}
		else if(strcmp(argv[1], "-h") == 0) {
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
