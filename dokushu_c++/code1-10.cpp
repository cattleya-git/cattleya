#include<iostream>

int main()
{
    using std::cout;
    using std::endl;

    int* ptr=nullptr;

    if (ptr==nullptr)
    {
        cout<<"ptr = nullptr"<<endl;
    }
    else
    {
        *ptr=10;
    }

}