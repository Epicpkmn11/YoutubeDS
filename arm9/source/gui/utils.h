#ifndef UTILS_H
#define UTILS_H

#include <string>

std::u16string UTF8toUTF16(const std::string& src);
std::string UTF16toUTF8(const std::u16string& src);


#endif
