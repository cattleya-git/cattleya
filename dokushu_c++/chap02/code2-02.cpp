#include <iostream>
using std::cout;
using std::endl;

struct product
{
    int id;
    int price;
    int stock;
};

void show_product(product product)
{
    cout << "id = " << product.id << endl;
    cout << "price = " << product.price << endl;
    cout << "stock = " << product.stock << endl;
}

int main()
{
    product pen =
        {
            5,
            200,
            1000,
        };
    show_product(pen);
}