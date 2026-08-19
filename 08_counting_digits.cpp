#include <iostream>
#include <string>

int main()
{
    std::string number_to_find_digits_of;
    std::cout << "Please Enter the number to find digits" << std::endl;
    std::cin >> number_to_find_digits_of;
    int length_of_string = number_to_find_digits_of.length();
    std::cout << "Length is : " << length_of_string;
    return 0;
}