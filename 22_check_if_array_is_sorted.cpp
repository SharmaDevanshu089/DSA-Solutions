#include <bits/stdc++.h>

int main()
{
    std::array<int, 7> sorted_array = {1, 24, 75, 89, 123, 345, 567};

    for (int i = 0; i < (sorted_array.size() - 1); i++)
    {
        if (!(sorted_array[i] <= sorted_array[i + 1]))
        {
            std::cout << "This is Not sorted decending";
            exit(0);
        }
    }

    return 0;
}