#include <iostream>

struct product
{
    int id;
    int price;
    int stock;
};

int main()
{
    using std::cout;
    using std::endl;

    product pen;

    pen.id = 1;
    pen.price = 100;
    pen.stock = 500;
    cout << "pen.id = " << pen.id << endl;

    product *ptr = &pen;
    cout << "ptr->id = " << ptr->id << endl;
}