#include<bits/stdc++.h>

int main(){
    std::array<int,5> first_array= {1,2,3,4,5};
    std::vector<int>second_array = {2,3,4,5,6,4,3,7};

    std::unordered_set<int> union_of_arrays;

    for(int x : first_array){
        union_of_arrays.insert(x);
    }
    for (int x : second_array)
    {
        union_of_arrays.insert(x);
    }
    
    for(int output: union_of_arrays){
        std::cout << output << std::endl;
    }
}