#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    int i = 0;
    int &j = i;
    j = 42;
    cout << i << endl;

    const int ci = 42;
    const int &r = ci;
    cout << r << endl;
}