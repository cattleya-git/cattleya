#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 125;
    decltype(i > 126) var;
    cout << typeid(var).name() << endl;
    var = true;
    cout << std::boolalpha << var << endl;
    cout << typeid(false).name() << endl;
}