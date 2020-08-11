#include <iostream>
using std::cout;
using std::endl;

struct product
{
    int id;
    int price;
    int stock;
};

void show_product(product *ptr)
{
    cout << "id = " << ptr->id << endl;
    cout << "price = " << ptr->price << endl;
    cout << "stock = " << ptr->stock << endl;
}

int main()
{
    product pen =
        {
            5,
            200,
            1000,
        };
    show_product(&pen);
}