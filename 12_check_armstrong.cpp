#include <iostream>
#include <string>
#include <cmath>
int main()
{
    std::cout << "Enter the number to test: " << std::endl;
    int number_to_test;
    std::cin >> number_to_test;
    // Finding length
    std::string tempstring = std::to_string(number_to_test);
    int length = tempstring.length();
    double result = 0;
    for (int i = 0; i < length; i++)
    {
        int digit = tempstring[i] - '0';
        result = result + std::round(std::pow(digit, length));
    }
    std::cout << std::endl
              << result;
    return 0;
}