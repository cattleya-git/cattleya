#include<iostream>

int main()
{
    using std::cout;
    using std::endl;

    char c=100;
    cout<<"char c = "<<c<<endl;
    cout<<"int c = "<<static_cast<int>(c*5)<<endl;
}