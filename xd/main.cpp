#include <iostream>
#include "tasks1.hpp"
#include "tasks2.hpp"
#include "tasks3.hpp"

int main()
{
    setlocale(LC_ALL, "ru");
    int choice;

        do 
        {
            std::cout << "Выберите задание:\n";
            std::cout << "1 - Задание 1\n";
            std::cout << "2 - Задание 2\n";
            std::cout << "3 - Задание 3\n";
            std::cout << "0 - Выход\n";

            std::cin >> choice;

            switch (choice) 
            {
            case 1:
                tasks1();
                break;
            case 2:
                tasks2();
                break;
            case 3:
                tasks3();
                break;
            case 0:
                std::cout << "Выход из программы.\n";
                break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова.\n";
            }
        } while (choice != 0);

        return 0;
}