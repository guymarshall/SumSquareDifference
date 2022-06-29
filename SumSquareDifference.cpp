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

#define LOG(x) std::cout << x << std::endl

int main(int argc, char const *argv[])
{
    //ask for number to go up to
    
    //work out all numbers up to and including that number squared individually then summed
    //work out all numbers up to and including that number summed then squared
    //work out the difference between the two values
    //print the difference

    LOG("Hello, World!");
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    LOG(sum(numbers));// works :)
    return 0;
}