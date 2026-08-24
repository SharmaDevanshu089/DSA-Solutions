#include <bits/stdc++.h>

int main()
{
    std::array<int, 5> question_array = {10, 10, 15, 20, 10};
    int max = 0;
    int min = 0;
    int maxid, minid = {0};
    std::unordered_map<int, int> solution_array;
    for (int i = 0; i < question_array.size(); i++)
    {
        solution_array[question_array[i]] += 1;
    }

    // finding highest and lowest
    for (int i = 0; i < question_array.size(); i++)
    {
        if (solution_array[question_array[i]] > max)
        {
            max = solution_array[question_array[i]];
            maxid = question_array[i];
        }
        if (solution_array[question_array[i]] < min)
        {
            min = solution_array[question_array[i]];
            minid = question_array[i];
        }
    }

    std::cout << "Max is :" << maxid << " at " << max << " and minimum is : " << min;
    return 0;
}