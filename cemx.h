#ifndef CEMX_H
#define CEMX_H

#include <string>

class InfoFromDotFile {
	public:
		InfoFromDotFile();
	private:
		bool IsDotFileExist();
		static const std::string filename;
};

#endif // CEMX_H
