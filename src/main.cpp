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

    out << L"������� ������ ���� �� �����:\n";
    cin >> Folder;

    get_path(Folder, FolderDirectory);
    if (!check_path(FolderDirectory)) {
        out << L"\n����� ����� �� ����������!\n";

        out << L"\n������� Enter ����� ����������\n";
        string pause;
        cin.ignore();
        getline(std::cin, pause);
    }
    out << L"\n����� ����� ����������!\n\n";

    return 0;
}