#include<iostream>

int main()
{
    using std::cout;
    using std::endl;

    int* ptr = 0;
    cout<<"ptr = "<<ptr<<endl;

    ptr = nullptr;
    cout<<"ptr = "<<ptr<<endl;
}