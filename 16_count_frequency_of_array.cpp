#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <array>

int main()
{
    std::array<int, 5> array_to_calculate = {10, 15, 10, 13902, 0};
    int size_of_array = array_to_calculate.size();
    std::cout << size_of_array;

    std::unordered_map<int, int> solution_array;

    for (int i = 0; i < size_of_array; i++)
    {
        solution_array[array_to_calculate[i]] += 1;
        std::cout << std::endl
                  << "Changes to "
                  << array_to_calculate[i]
                  << " As it has been count made to "
                  << solution_array[array_to_calculate[i]];
    }

    return 0;
}