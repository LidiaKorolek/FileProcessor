#ifndef GET_PATH_H
#define GET_PATH_H

#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void get_path(const std::string Folder, fs::path& FolderDirectory);
bool check_path(fs::path FolderDirectory);

#endif