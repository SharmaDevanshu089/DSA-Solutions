#include<bits/stdc++.h>

int main(){
    int current_streak = 0;
    int maximum_number_of_streak = 0;
    std::array<int , 6 > array_to_operate = {1,1,0,1,1,1};

    for(int i = 1; i < array_to_operate.size(); i++)
    {
        if (array_to_operate[i] == array_to_operate[i - 1])
        {
            if (current_streak != 0)
            {
                current_streak += 1;
            }
            else{
                current_streak = 2;
            }
            
        }
        else {
            if (current_streak > maximum_number_of_streak)
            {
                maximum_number_of_streak = current_streak;
                current_streak = 0;
            }
            else{
                std::cout << "Streak Ended at: " << current_streak;
                current_streak = 0;
            }
            
        }
        if (i == (array_to_operate.size() - 1))
        {
            // this is the last element
            if (current_streak > maximum_number_of_streak)
            {
                maximum_number_of_streak = current_streak;
                current_streak = 0;
            }
            else{
                std::cout << "Streak Ended at: " << current_streak;
                current_streak = 0;
            }
        }
           
    }
    std::cout << "Maximum Streak : " << maximum_number_of_streak;
    return 0;
}