#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    int *pi = 0; // int型のポインター型
    cout << "pi = " << pi << endl;

    int i0 = 3;
    int *pi0 = &i0;                    // int型の変数i0のアドレスを、int型のポインター型の変数pi0に代入（アドレス演算子）
    cout << "i0 = " << i0 << endl;     // 元の変数
    cout << "pi0 = " << pi0 << endl;   // i0のアドレスを代入したポインター変数
    cout << "*pi0 = " << *pi0 << endl; // 間接参照演算子(dereference operator)、アドレスを経由して変数を操作
    *pi0 = 5;                          // ポインター変数（i0のアドレス）を経由して変数にアクセス
    cout << "*pi0 = " << *pi0 << endl; // アドレスを経由して値を参照
    cout << "i0 = " << i0 << endl;     // アドレスを経由して操作された変数
}