#include <iostream>

struct S
{
    int x;
    int y;
};

union U {
    S s;
    //S t;
};

int main()
{
    using std::cout;
    using std::endl;

    U u = {};
    u.s.x = 10;
    u.s.y = 20;
    //u.t.x = 30;
    //u.t.y = 40;
    cout << u.s.x << endl;
    cout << u.s.y << endl;

    cout << &u << endl;     // 共有体uのアドレス
    cout << &u.s << endl;   // 共有体メンバー変数sのアドレス（共有体uのアドレス値が、全ての共有体メンバー変数（sのみ）のアドレス値に当てられる）
    cout << &u.s.x << endl; // 構造体メンバー変数xのアドレス（構造体sのアドレス値が、構造体メンバー変数１番目（x）のアドレス値に割り当てられる）
    cout << &u.s.y << endl; // 構造体メンバー変数yのアドレス（１番目から一つ後ろのアドレス値が、構造体メンバー変数２番目（y）のアドレス値に割り当てられる）

    //cout << &u.t.x << endl;
    //cout << &u.t.y << endl;
}