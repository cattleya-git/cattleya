#include <iostream>

void nochange(int i)
{
    i = 25;
}
void change(int *pi) // call by pointer
{
    *pi = 125; // ポインタ変数（アドレス）を経由してint型変数を操作
}
int main()
{
    using std::cout;
    using std::endl;

    int i0 = 5;

    nochange(i0);
    cout << "i0 = " << i0 << endl;
    change(&i0); // アドレス演算子
    cout << "i0 = " << i0 << endl;
}