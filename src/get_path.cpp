#include "get_path.h"

void get_path(const std::string Folder, fs::path& FolderDirectiry)
{
    FolderDirectiry = fs::absolute(fs::u8path(Folder));
}

bool check_path(fs::path FolderDirectory)
{
    if (fs::exists(FolderDirectory)) {
        return true;
    } else {
        return false;
    }
}
