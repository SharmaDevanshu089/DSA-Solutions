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

int find_second_highest_value(std::array<int, 5> unsorted_array, int maximum_value)
{
    int second_highest = INT_MIN;
    int length = unsorted_array.size();
    for (int i = 0; i < length; i++)

    {
        if (unsorted_array[i] < maximum_value)
        {

            if (unsorted_array[i] > second_highest)
            {
                second_highest = unsorted_array[i];
            }
        }
    }
    return second_highest;
}
int main()
{
    std::array<int, 5> unsorted_array = {12, 133, 2, 56, 90};
    int highest_element_value = find_highest_element_value(unsorted_array);
    int second_highest_value = find_second_highest_value(unsorted_array, highest_element_value);

    std::cout
        << "2nd Maximim Value is " << second_highest_value;
    return 0;
}
