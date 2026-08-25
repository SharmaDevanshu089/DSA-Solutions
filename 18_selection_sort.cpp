#include <bits/stdc++.h>
using namespace std;

std::array<int, 5> sort_array(std::array<int, 5> array_to_sort)
{
    int size_of_array = array_to_sort.size();
    int minimum_array_value = 0;
    for (int i = 0; i < size_of_array; i++)
    {
        // selected the first
        for (int j = 0; j < size_of_array; j++)
        {
            if (array_to_sort[i] < array_to_sort[j])
            {
                minimum_array_value = array_to_sort[i];
            }
            int temp = array_to_sort[j];
            array_to_sort[j] = array_to_sort[i];
            array_to_sort[i] = temp;
        }
    }
    return array_to_sort;
}

int main()
{
    std::array<int, 5> question_array = {13, 12, 45, 75, 32};
    std::array<int, 5> solution_array = sort_array(question_array);

    // debug print
    int n = solution_array.size();
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << solution_array[i] << " ";
    }
    cout << "\n";

    return 0;
}