#include <iostream>

struct S
{
    int a;
    int b;
    int c;
};

union U {
    int x;
    int y;
    int z;
};

int main()
{
    S s;
    std::cout << "sのアドレスは " << &s << std::endl;
    std::cout << "s.aのアドレスは " << &s.a << std::endl;
    std::cout << "s.bのアドレスは " << &s.b << std::endl;
    std::cout << "s.cのアドレスは " << &s.c << std::endl;
    U u;
    std::cout << "uのアドレスは " << &u << std::endl;
    std::cout << "u.xのアドレスは " << &u.x << std::endl;
    std::cout << "u.yのアドレスは " << &u.y << std::endl;
    std::cout << "u.zのアドレスは " << &u.z << std::endl;
}