#ifndef CEMX_H
#define CEMX_H

#include <string>

class InfoFromDotFile {
	public:
		InfoFromDotFile();
		std::string GetBashPath() { return bash_path_; }
	private:
		bool IsDotFileExist();
		std::string bash_path_;
		static const std::string filename_;
};

class OpenPane {
	public:
		static void OpenBash(std::string bash_path, std::string option);
};

#endif // CEMX_H
