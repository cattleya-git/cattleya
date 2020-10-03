#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    auto var01 = 256;
    auto var02 = 3.14;
    auto var03 = "yuri_ebihara";
    auto var04 = true;

    cout << typeid(var01).name() << endl
         << typeid(var02).name() << endl
         << typeid(var03).name() << endl
         << typeid(var04).name() << endl;

    const char *model = "ebichan";
    cout << typeid(model).name() << endl;
}