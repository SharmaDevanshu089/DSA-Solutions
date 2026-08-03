#include <iostream>
#include <string>

class Solution {
public:
  int findLength(std::string s) { return s.length(); }
};

int main(){
    Solution sol;
    std::string Name;
    std::cin >> Name;
    std::cout << sol.findLength(Name);
    return 0;
}