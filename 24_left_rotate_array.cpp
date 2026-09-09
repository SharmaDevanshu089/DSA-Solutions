#include<bits/stdc++.h>

int main(){
    std::array<int, 5> array_to_shift = {1, 2, 3, 4, 5};
    // std::array<int, 5> shifted_array ;
    int temporary_first_variable_of_array ;
    for (int i = 0; i < array_to_shift.size(); i++)
    {
        if (i == 0)
        {
            temporary_first_variable_of_array = array_to_shift[i];
        }
        else if (i == (array_to_shift.size() - 1) )
        {
            array_to_shift[(i - 1)] = array_to_shift[i];
            array_to_shift[i] = temporary_first_variable_of_array;
        }
        
        else{
            array_to_shift[(i - 1)] = array_to_shift[i];
        }
        
    }
    for (int j = 0; j < array_to_shift.size(); j++)
    {
        std::cout << "Index " << j << " is: " << array_to_shift[j] << std::endl;
    }
    
    return 0;
}