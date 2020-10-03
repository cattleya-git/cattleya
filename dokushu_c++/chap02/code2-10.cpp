#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    int value = 256;
    cout << "value = " << value << ", "
         << "address = " << &value << endl;

    int &ref_value = value;
    cout << "ref_value = " << ref_value << ", "
         << "address = " << &ref_value << endl;

    ref_value = 512;
    cout << "value = " << value << ", "
         << "address = " << &value << endl;
}