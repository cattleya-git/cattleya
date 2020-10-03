#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    char array[] = {'y', 'u', 'r', 'i'};
    for (auto c : array)
    {
        cout << "♡" << c;
    }
    cout << "♡" << endl;
}