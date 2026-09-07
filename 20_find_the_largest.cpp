#include <bits/stdc++.h>

int find_highest_element_value(std::array<int, 5> unsorted_array)
{
    int maximum_value = unsorted_array[0];
    int length = unsorted_array.size();

    for (int i = 0; i < length; i++)
    {
        if (unsorted_array[i] > maximum_value)
        {
            maximum_value = unsorted_array[i];
        }
    }
    return maximum_value;
}
int main()
{
    std::array<int, 5> unsorted_array = {12, 133, 2, 56, 90};
    int highest_element_value = find_highest_element_value(unsorted_array);

    std::cout << "Maximim Value is " << highest_element_value;
    return 0;
}
