#include <iostream>
#include "tasks3.hpp"


void tasks3()
{

        int profit[12];
    int startMonth, endMonth;
    int maxProfit = 0, minProfit = INT_MAX;
    int maxMonth, minMonth;

    for (int i = 0; i < 12; ++i)
    {
        std::cout << "\n¬ведите прибыль за " << i + 1 << " мес€ц: ";
        std::cin >> profit[i];
    }

    std::cout << "\n¬ведите начальный и конечный мес€цы диапазона: ";
    std::cin >> startMonth >> endMonth;

    for (int i = startMonth - 1; i < endMonth; ++i)
    {
        if (profit[i] > maxProfit)
        {
            maxProfit = profit[i];
            maxMonth = i + 1;
        }
        if (profit[i] < minProfit)
        {
            minProfit = profit[i];
            minMonth = i + 1;
        }
    }

    std::cout << "ћаксимальна€ прибыль " << maxProfit << " была в " << maxMonth << " мес€це." << "\n";
    std::cout << "ћинимальна€ прибыль " << minProfit << " была в " << minMonth << " мес€це.";
}
