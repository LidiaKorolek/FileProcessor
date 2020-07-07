#include <filesystem>
#include <iostream>
#include <string>

#include "get_path.h"

using namespace std;
namespace fs = std::filesystem;

int main()
{
    setlocale(LC_ALL, "Russian");

    string Folder;
    fs::path FolderDirectory;

    wcout << L"Введите полный путь до папки:\n";
    cin >> Folder;

    get_path(Folder, FolderDirectory);
    if (!check_path(FolderDirectory)) {
        wcout << L"\nТакая папка не существует!\n";

        wcout << L"\nНажмите Enter чтобы продолжить\n";
        string pause;
        cin.ignore();
        getline(std::cin, pause);
    }
    wcout << L"\nТакая папка существует!\n\n";

    return 0;
}