#include <iostream>

using std::cout;
using std::endl;

class data
{
public:
    using yuri = int;
    yuri get_value();
    void set_value(yuri new_value);

private:
    yuri value;
};

data::yuri data::get_value()
{
    return value;
}
void data::set_value(yuri new_value)
{
    yuri tmp = new_value;
    value = tmp;
}

int main()
{
    using ebi = data::yuri;
    ebi value = 40;
    data d;
    d.set_value(value);
    cout << d.get_value() << endl;
}