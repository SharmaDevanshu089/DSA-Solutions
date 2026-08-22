#include <iostream>
#include <array>
#include <string>

std::array reverse_array(std::array array_to_reverse)
{
    int length = array_to_reverse.length();
    std::array new_array[length];
    for (int i = 0; i <= length; i++)
    {
        new_array[i] = array_to_reverse[length - i];
    }
    return new_array[];
}

int main()
{
    int array_to_reverse[] = {1, 2, 3, 4, 5, 6};
}