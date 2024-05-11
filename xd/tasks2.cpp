#include "tasks2.hpp"
#include <iostream>
#include "tasks2.hpp"


void tasks2()
{
    int n, lower_bound, sum = 0;
    std::cout << "¬ведите размер массива: ";
    std::cin >> n;
    int* arr = new int[n];
    std::cout << "¬ведите нижнюю границу диапазона: ";
    std::cin >> lower_bound;
    std::cout << "массив: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";

            if (arr[i] < lower_bound)
            {
                sum += arr[i];
            }
    }

    std::cout << "\n—умма элементов массива, значени€ которых меньше " << lower_bound << ": " << sum << "\n";
}

