#ifndef GET_PATH_H
#define GET_PATH_H

#include <filesystem>
#include <string>

namespace fs = std::filesystem;

bool CheckPath(const fs::path FolderDirectory);

#endif