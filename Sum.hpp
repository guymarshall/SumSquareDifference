#include <vector>

long long sum(std::vector<long long>& numbers)
{
    long long sum = 0;
    for (long long number: numbers)
    {
        sum += number;
    }

    return sum;
}