#include<bits/stdc++.h>

class Solution {
    public:
    void PrintAllCharacters(std::string s){
        int length = s.length();
        std::cout << "[DEBUG] Lenght :" << length << std::endl;
        int i = 0;
        for(i=0 ; i < length; i++){
            std::cout << s[i] << std::endl;
        }
    }
};

int main(){
        Solution Sol;
        std::string Name;
        std::getline(std::cin, Name);
        Sol.PrintAllCharacters(Name);
        return 0;
}
