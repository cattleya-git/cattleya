#include<iostream>

void hello_world()
{
    std::cout<<"Hello world"<<std::endl;
}

int sum_values(int a, int b)
{
    return a+b;
}

int main()
{
    hello_world();
    std::cout<<sum_values(2, 3)<<std::endl;
}