#include <iostream>
#include <string>

int main()
{
    const std::string barrier = "=======";
    std::cout << "Please Enter the number to reverse";
    std::string number_to_reverse;
    std::cin >> number_to_reverse;
    // to find current length
    int current_length_of_number = number_to_reverse.length();
    std::string reversed_number;
    std::cout << barrier;
    for (int i = 0; i <= current_length_of_number; i++)
    {
        reversed_number.push_back(number_to_reverse[current_length_of_number - i]);
    }
    std::cout << barrier << std::endl
              << reversed_number;
    return 0;
}