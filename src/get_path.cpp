#include "get_path.h"

void get_path(std::string Folder, fs::path FolderDirectiry)
{
    FolderDirectiry = fs::absolute(fs::u8path(Folder));
}

bool check_path(fs::path FolderDirectiry)
{
    if (fs::exists(FolderDirectiry)) {
        return true;
    }

    return false;
}
