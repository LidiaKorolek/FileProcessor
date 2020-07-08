#include <filesystem>
#include <iostream>
#include <string>

#include "CheckPath.h"

namespace fs = std::filesystem;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string Folder;
    fs::path FolderDirectory;

    bool MenuState = true;
    int UserChoose;

    while (MenuState) {
        std::wcout << L"\n  1. Начать работу\n"
                   << L"  2. О программе\n"
                   << L"  3. Об авторах\n"
                   << L"  4. Выход\n  >> ";
        std::cin >> UserChoose;

        switch (UserChoose) {
        case 1: {
            std::wcout << L"\n  Введите полный путь до папки:\n  ";
            std::cin >> Folder;

            FolderDirectory = fs::absolute(fs::u8path(Folder));

            if (!CheckPath(FolderDirectory)) {
                std::wcout << L"\n  Такая папка не существует!\n  ";
                system("pause");
                system("cls");
                break;
            }
            std::wcout << "  ";
            system("pause");
            system("cls");
            break;
        }
        case 2: {
            // Нужно что-то написать
            std::wcout << L"\n  Заглушка для инфы о проге\n  ";
            system("pause");
            system("cls");
            break;
        }
        case 3: {
            // Тут тоже нужно что-то написать
            std::wcout << L"\n  Заглушка для инфы об авторах\n  ";
            system("pause");
            system("cls");
            break;
        }
        case 4: {
            MenuState = false;
            std::wcout << "  ";
            system("pause");
            system("cls");
            break;
        }
        default: {
            std::wcout << L"\n  Ошибка ввода!\n  ";
            system("pause");
            system("cls");
            break;
        }
        }
    }

    return 0;
}