#include "tasks2.hpp"
#include <iostream>
#include "tasks2.hpp"


void tasks2()
{
    int n, lower_bound, sum = 0;
    std::cout << "������� ������ �������: ";
    std::cin >> n;
    int* arr = new int[n];
    std::cout << "������� ������ ������� ���������: ";
    std::cin >> lower_bound;
    std::cout << "������: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";

            if (arr[i] < lower_bound)
            {
                sum += arr[i];
            }
    }

    std::cout << "\n����� ��������� �������, �������� ������� ������ " << lower_bound << ": " << sum << "\n";
}

