#include <stdlib.h>
#include <string>
#include <iostream>
#include "cemx.h"

void OpenPane::OpenBash(std::string bash_path, std::string option) {
	std::string str_system = "cmd /c \"" + bash_path + " --login -i -new_console:" + option + "\"";

	std::cout << str_system << std::endl;

	system(str_system.c_str());
}
