#include<bits/stdc++.h>

std::array<int , 11> slice_and_slide(std::array<int, 11> array_to_slide, int index_to_remove){
    for (int i = index_to_remove; i < array_to_slide.size(); i++)
    {
        if (i != (array_to_slide.size() - 1))
        {
            // std::swap(array_to_slide[i], array_to_slide[i+1]); 
            // just kill the value
            array_to_slide[i] = array_to_slide[i+1];
        }
        else{
            array_to_slide[i] = INT_MIN;
            // dead value at the end
        }
    }
    return array_to_slide;
    
}
void printarray(std::array<int ,11> printarray){
    for (int i = 0; i < printarray.size(); i++)
    {
        std::cout << "Printing Value : " << printarray[i] << std::endl;
    }
    
}
int main(){
    std::array<int , 11> sorted_array = {1,1,1,2,2,3,3,3,3,4,4};

    for (int i = 0; i < sorted_array.size(); i++)
    {
        if (i != (sorted_array.size() - 1))
        {
            if (sorted_array[i] == sorted_array[i+1] && sorted_array[i] != INT_MIN)
            {
                std::cout << "Duplicate Detected at: " << i << std::endl;
                sorted_array = slice_and_slide(sorted_array , i);
                // need to recheck current index cuz value is moved
                i--;
            }
            
        }
        
    }

    printarray(sorted_array);
    return 0;
}