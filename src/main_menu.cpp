#include "main_menu.h"

void main_menu()
{
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

            if (!check_path(FolderDirectory)) {
                std::wcout << L"\n  Такая папка не существует!\n";
            }
            break;
        }
        case 2: {
            // Нужно что-то написать
            std::wcout << L"\n  Заглушка для инфы о проге\n";
            break;
        }
        case 3: {
            // Тут тоже нужно что-то написать
            std::wcout << L"\n  Заглушка для инфы об авторах\n";
            break;
        }
        case 4: {
            MenuState = false;

            std::wcout << L"\n  Нажмите Enter чтобы продолжить\n  ";
            std::string pause;
            std::cin.ignore();
            std::getline(std::cin, pause);
            break;
        }
        default: {
            std::wcout << L"\n  Ошибка ввода!\n";
            break;
        }
        }
    }
}
