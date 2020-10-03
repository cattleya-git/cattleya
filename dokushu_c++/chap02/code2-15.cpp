#include <iostream>
using std::cout;
using std::endl;

int twice(int j); // プロトタイプ宣言

int main()
{
    auto d = 3.14;
    d = 6.28f;
    cout << d << endl;

    auto i = twice(256);
    cout << i << endl;
    i = 12.56;
    cout << i << endl;
}

int twice(int j)
{
    return j * 2;
}