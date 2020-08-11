#include <iostream>

enum class Category : int8_t
{
    Value01,
    Value02,
    Value03 = 126,
    Value04,
};

int main()
{
    Category cat = Category::Value03;
    std::cout << "cat = " << static_cast<int>(cat) << std::endl;
}