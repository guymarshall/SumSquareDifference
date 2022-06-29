#include <vector>
#include <cmath>

std::vector<int> numberToVector(int number)
{
    std::vector<int> numbers;

    for (int i = 1; i <= number; i++)
    {
        numbers.push_back(i);
    }

    return numbers;
}

std::vector<int> squareVectorValues(std::vector<int>& values)
{
    std::vector<int> squaredValues;

    for (int i = 0; i < values.size(); i++)
    {
        squaredValues.push_back(pow(values[i], 2));
    }

    return squaredValues;
}