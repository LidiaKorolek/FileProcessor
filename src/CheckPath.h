#ifndef GET_PATH_H
#define GET_PATH_H

#include <filesystem>
#include <string>

namespace fs = std::filesystem;

bool check_path(fs::path FolderDirectory);

#endif