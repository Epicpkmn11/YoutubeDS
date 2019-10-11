#ifndef FILE_BROWSE_H
#define FILE_BROWSE_H
#include <string>
#include <vector>

struct DirEntry {
	std::string name;
	bool isDirectory;
};

/*
 * Gets the contents of the current directory
 * std::vector<DirEntry>& dirContents is where the contents will be stored
 * const std::vector<std::string> extensionList is the extensions to include
 */
void getDirectoryContents(std::vector<DirEntry>& dirContents, const std::vector<std::string> extensionList);

/*
 * Browse for a file
 * const std::vector<std::string>& extensionList is the extensions to show
 * Returns the selected file
 */
std::string browseForFile(const std::vector<std::string>& extensionList);

#endif //FILE_BROWSE_H