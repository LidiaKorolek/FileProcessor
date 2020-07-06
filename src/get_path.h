#ifndef GET_PATH_H
#define GET_PATH_H

#include <string>
#include <filesystem>

namespace fs = std::filesystem;

void get_path(std::string Folder, fs::path FolderDirectiry);
bool check_path(fs::path FolderDirectiry);

#endif