#include<iostream>
#include<string>

int main(){
    int n;
    std::cin >> n;
    int spacing_variable;
    // std::cout << n;
    for (int i = 0; i <= (n*2); i++)
    {
        spacing_variable = n;
        for (spacing_variable; spacing_variable <= i; spacing_variable)
        {
            std::cout << "0";
        }
        for (int j = 0; j <= i; j++)
        {
            
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    return 0;
}