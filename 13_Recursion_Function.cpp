#include <iostream>
#include <string>

void print_name(int count, std::string name)
{
    if (count > 0)
    {
        std::cout << name << std::endl;
        count = count - 1;
        print_name(count, name);
    }
}
int main()
{
    std::cout << "Enter the number of time the function needs to be called" << std::endl;
    int count;
    std::cin >> count;
    std::string name;
    std::cout << std::endl
              << "Enter the name to be repeated : " << std::endl;
    std::cin >> name;
    print_name(count, name);
    std::cout << "Program Ended";
    return 0;
}
