#include<iostream>

class C
{
    int default_member; // private
public:
    int public_member;
private:
    int private_member;
};

int main()
{
    C c; // クラスCのインスタンスc
    c.public_member=100;
    std::cout<<c.public_member<<std::endl;
}