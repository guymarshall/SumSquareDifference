#include <vector>

int sum(std::vector<int>& numbers)
{
    int sum = 0;
    for (int number: numbers)
    {
        sum += number;
    }

    return sum;
}