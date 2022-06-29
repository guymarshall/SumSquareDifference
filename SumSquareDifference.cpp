#include <iostream>
#include "Sum.hpp"
#include <vector>
#include "Math.hpp"
#include <cmath>

#define LOG(x) std::cout << x << std::endl

int main(int argc, char const *argv[])
{
    std::cout <<"Number: ";
    long long number;
    std::cin >> number;

    std::vector<long long> numbers = numberToVector(number);

    std::vector<long long> squaredValues = squareVectorValues(numbers);
    long long sumOfSquaredValues = sum(squaredValues);
    long long sumOfValues = sum(numbers);

    long long squaredSum = pow(sumOfValues, 2);
    long long difference = squaredSum - sumOfSquaredValues;
    
    std::cout << "Difference between " << squaredSum << " and " << sumOfSquaredValues << " is: " << difference << std::endl;
    return 0;
}