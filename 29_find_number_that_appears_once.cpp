#include<bits/stdc++.h>

std::unordered_map<int, int> hash(std::array<int, 5> array_to_operate){
    std::unordered_map<int, int> hashed_array;
    for (int x :array_to_operate)
    {
        hashed_array[x] += 1;
    }
    return hashed_array;
}

int main()
{
    std::array<int,5> array_to_operate = {4,1,2,1,2};
    std::unordered_map<int,int> hashed_value = hash(array_to_operate);

    for (const auto& pair : hashed_value) {
        std::cout << "Key: " << pair.first << " | Value: " << pair.second << "\n";
    }
    
    return 0;
}