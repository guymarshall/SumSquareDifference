// The sum of the squares of the first ten natural numbers is
//     1^2 + 2^2 + ... + 10^2 = 385

// The square of the sum of the first ten natural numbers is
//     (1 + 2 + ... + 10)^2 = 3025

// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
//     3025 - 385 = 2640

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

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