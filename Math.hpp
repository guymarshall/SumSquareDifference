#include <vector>
#include <cmath>

std::vector<long long> numberToVector(long long number)
{
    std::vector<long long> numbers;

    for (long long i = 1; i <= number; i++)
    {
        numbers.push_back(i);
    }

    return numbers;
}

std::vector<long long> squareVectorValues(std::vector<long long>& values)
{
    std::vector<long long> squaredValues;

    for (long long i = 0; i < values.size(); i++)
    {
        squaredValues.push_back(pow(values[i], 2));
    }

    return squaredValues;
}