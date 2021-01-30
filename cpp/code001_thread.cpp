#include<iostream>
#include<thread>

int main()
{
    using std::cout;
    using std::endl;

    cout << "concurrency = " << std::thread::hardware_concurrency() << endl;
    return 0;
}