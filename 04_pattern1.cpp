#include<iostream>
#include<string>

class Solution{
    public:
        void pattern1(int n){
            for(int i = 0; i<= n;i++){
                for (int j = 0; j < n; j++)
                {
                    std::cout << "*" ;
                }
                std::cout << std::endl;
                
            }
        }
};

int main(){
    int n;
    std::cin >> n;
    Solution sol;
    sol.pattern1(n);
    return 0;
}