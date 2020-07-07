#include "main_menu.h"

void main_menu()
{
    std::string Folder;
    fs::path FolderDirectory;

    bool MenuState = true;
    int UserChoose;

    while (MenuState) {
        std::wcout << L"\n  1. ������ ������\n"
                   << L"  2. � ���������\n"
                   << L"  3. �� �������\n"
                   << L"  4. �����\n  >> ";
        std::cin >> UserChoose;

        switch (UserChoose) {
        case 1: {
            std::wcout << L"\n  ������� ������ ���� �� �����:\n  ";
            std::cin >> Folder;

            FolderDirectory = fs::absolute(fs::u8path(Folder));

            if (!check_path(FolderDirectory)) {
                std::wcout << L"\n  ����� ����� �� ����������!\n";
            }
            break;
        }
        case 2: {
            // ����� ���-�� ��������
            std::wcout << L"\n  �������� ��� ���� � �����\n";
            break;
        }
        case 3: {
            // ��� ���� ����� ���-�� ��������
            std::wcout << L"\n  �������� ��� ���� �� �������\n";
            break;
        }
        case 4: {
            MenuState = false;

            std::wcout << L"\n  ������� Enter ����� ����������\n  ";
            std::string pause;
            std::cin.ignore();
            std::getline(std::cin, pause);
            break;
        }
        default: {
            std::wcout << L"\n  ������ �����!\n";
            break;
        }
        }
    }
}
