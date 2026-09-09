#include<bits/stdc++.h>

std::array<int,5> slide_to_end(std::array<int, 5> array_to_slide , int index_to_slide){
    // this only slides to end
    int temporay_variable;
    for (int i = index_to_slide; i < array_to_slide.size(); i++)
    {
        // backup current thingy
        if( i == index_to_slide){
            temporay_variable = array_to_slide[i];
        }
        else if (i == (array_to_slide.size() - 1))
        {
            array_to_slide[i] = temporay_variable;
            std::swap(array_to_slide[i], array_to_slide[i-1]);
        }
        else{
            std::swap(array_to_slide[i], array_to_slide[i-1]);
        }
        
    }
    return array_to_slide;
    
}
int main(){

    std::array<int, 5> array_to_check = {1 ,0 ,2 ,3 ,0 };
    for(int i = 0; i < array_to_check.size(); i++)
    {
        if (array_to_check[i] == 0)
        {
            array_to_check = slide_to_end(array_to_check, i);
        }
        
    }
    
    for (int j = 0; j < array_to_check.size(); j++)
    {
        std::cout << "Index " << j << " is: " << array_to_check[j] << std::endl;
    }
    return 0;
}
