#include<iostream>

int main()
{
    int i=0;
    int* intptr=&i;
    *intptr=42;
    std::cout<<"i = "<<i<<std::endl;
}