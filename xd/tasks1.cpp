#include "tasks1.hpp"
#include <iostream>

void tasks1()
{
    const int size = 10;
    int arr[size];
    int min = INT_MAX;
    int max = INT_MIN;

        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 100;
            std::cout << arr[i] << " " << "\n";
        }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    std::cout << "Минимальный элемент: " << min << "\n";
    std::cout << "Максимальный элемент: " << max;
}
