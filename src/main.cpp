#include <filesystem>
#include <iostream>
#include <string>

#include "get_path.h"

using namespace std;
namespace fs = std::filesystem;

#ifdef _WIN32
auto& out = wcout;
#else
auto& out = cout;
#endif

int main()
{
    setlocale(LC_ALL, "Russian");

    string Folder;
    fs::path FolderDirectory;

    out << L"Введите полный путь до папки:\n";
    cin >> Folder;

    get_path(Folder, FolderDirectory);
    if (!check_path(FolderDirectory)) {
        out << L"\nТакая папка не существует!\n";

        out << L"\nНажмите Enter чтобы продолжить\n";
        string pause;
        cin.ignore();
        getline(std::cin, pause);
    }
    out << L"\nТакая папка существует!\n\n";

    return 0;
}