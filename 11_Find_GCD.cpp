#include <iostream>
#include <string>

int main()
{
    int first_number, second_number, bigger_number, smaller_number;
    std::cout << "Enter the First Number" << std::endl;
    std::cin >> first_number;
    std::cout << std::endl
              << "Enter the Second Number";
    std::cin >> second_number;
    if (first_number > second_number)
    {
        bigger_number = first_number;
        smaller_number = second_number;
    }
    else if (second_number > first_number)
    {
        bigger_number = second_number;
        smaller_number = first_number;
    }
    else
    {
        return 1;
    }
    for (int i = smaller_number; i > 1; i--)
    {
        if (bigger_number % i == 0 && smaller_number % i == 0)
        {
            std::cout << std::endl
                      << "gCD is " << i;
            return 0;
        }
    }

    return 1;
}