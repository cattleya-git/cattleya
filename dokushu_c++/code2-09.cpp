#include <iostream>
using std::cout;
using std::endl;

class product
{
    int id;
    int price;
    int stock;

public:
    // ここではスケルトンな（メンバ）関数定義を行っている
    int get_id();
    //void set_id(int new_id);
    int get_price();
    //void set_price(int new_price);
    int get_stock();
    //void set_stock(int new_stock);

    void set_values(int new_id, int new_price, int new_stock);
};

int product::get_id()
{
    return id; // クラスproductの内部で機能するので、privateなメンバ変数idにアクセスできる
}
/*
void product::set_id(int new_id)
{
    id = new_id;
}
*/
int product::get_price()
{
    return price;
}
/*
void product::set_price(int new_price)
{
    price = new_price;
}
*/
int product::get_stock()
{
    return stock;
}
/*
void product::set_stock(int new_stock)
{
    stock = new_stock;
}
*/

void product::set_values(int new_id, int new_price, int new_stock)
{
    id = new_id;
    price = new_price;
    stock = new_stock;
}

int main()
{
    product pen; // クラスproductのインスタンスpen
    //pen.set_id(5);
    //pen.set_price(200);
    //pen.set_stock(1000);
    pen.set_values(25, 500, 4800);

    product *ptr = &pen;
    cout << "ptr->get_id() = " << ptr->get_id() << endl;
    cout << "ptr->get_price() = " << ptr->get_price() << endl;
    cout << "ptr->get_stock() = " << ptr->get_stock() << endl;

    cout << "pen.get_id() = " << pen.get_id() << endl;
    cout << "pen.get_price() = " << pen.get_price() << endl;
    cout << "pen.get_stock() = " << pen.get_stock() << endl;
}