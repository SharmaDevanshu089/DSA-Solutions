#include<iostream>
#include<string>

class Solution{
    public:
        void pattern1(int n){
            for(int i = 0; i<= n;i++){
                int j;
                for (j = 0; j < i; j++)
                {
                    std::cout <<  j;
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