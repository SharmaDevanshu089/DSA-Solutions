#include<iostream>
#include<string>

class Solution{
    public:
        void create_pattern(int n){
            if (n%2 ==0){
                std::cout << "Even";
            }
            else {
                int middle_number = (n+1)/2;
                for(int i = 0; i <= n; i++)
                {   
                    int j;
                    for(j = 0; j <= n ; j++){
                        // std::cout << j << " :: " << middle_number << " ;; ";
                        if(j = middle_number){
                            std::cout << "*";
                        }
                        else{
                            std::cout << " ";
                        }
                        
                    }
                    
                    std::cout << "   <---end" << std::endl;
                }
            }
        }
};

int main(){
    int n;
    std::cin >> n;
    Solution sol;
    sol.create_pattern(n);
    return 0;
}