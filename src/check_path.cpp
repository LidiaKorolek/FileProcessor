#include "get_path.h"

bool check_path(fs::path FolderDirectory)
{
    if (fs::exists(FolderDirectory)) {
        return true;
    } else {
        return false;
    }
}
