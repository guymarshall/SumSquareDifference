#include <iostream>
#include "Sum.hpp"
#include <vector>
#include "Math.hpp"
#include <cmath>

#define LOG(x) std::cout << x << std::endl

int main(int argc, char const *argv[])
{
    std::cout <<"Number: ";
    int number;
    std::cin >> number;

    std::vector<int> numbers = numberToVector(number);

    std::vector<int> squaredValues = squareVectorValues(numbers);
    int sumOfSquaredValues = sum(squaredValues);
    int sumOfValues = sum(numbers);

    int squaredSum = pow(sumOfValues, 2);
    int difference = squaredSum - sumOfSquaredValues;
    
    std::cout << "Difference between " << squaredSum << " and " << sumOfSquaredValues << " is: " << difference << std::endl;
    return 0;
}