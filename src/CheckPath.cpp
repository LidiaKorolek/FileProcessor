#include "CheckPath.h"

bool CheckPath(const fs::path FolderDirectory)
{
    if (fs::exists(FolderDirectory)) {
        return true;
    } else {
        return false;
    }
}
