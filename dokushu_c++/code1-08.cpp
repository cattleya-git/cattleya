#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    const int a = 4;
    const int b = 16;
    int c = 20; // 非const変数

    const int *ptr = &a; // constポインタ
    cout << "*ptr = " << *ptr << endl;

    ptr = &b;
    cout << "*ptr = " << *ptr << endl;
    // *ptr = 64; ERROR

    ptr = &c; // 非const変数へのアドレス（アドレス演算子&c）は、constポインタへ代入できる
    cout << "*ptr = " << *ptr << endl;
    // *ptr = 64; ERROR、非const変数への間接参照であるが、constポインタを経由するため、値の書き込みは不可

    int *ptrvar = &c;
    cout << "*ptrvar = " << *ptrvar << endl;
    // ptrvar = &a; ERROR、const変数へのアドレスは、非constポインタへ代入できない
}