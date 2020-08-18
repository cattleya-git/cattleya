#include <iostream>

int main()
{
     using std::cout;
     using std::endl;

     int value = 256;
     cout << "value = " << value << ", "
          << "address = " << &value << endl;

     int &ref_value = value;
     cout << "ref_value = " << ref_value << ", "
          << "address = " << &ref_value << endl;

     ref_value = 512;
     cout << "value = " << value << ", "
          << "address = " << &value << endl;

     int *ptr_value = &value;
     cout << "*ptr_value = " << *ptr_value << ", "
          << "address = " << ptr_value << endl;

     cout << endl;

     int change_v = 1024;
     cout << "address of change_v : " << &change_v << endl;

     ref_value = change_v;  // アドレスはvalueと同じなまま
     ptr_value = &change_v; // アドレスはchange_vのモノに変わる
     cout << "ref_value = " << ref_value << ", "
          << "address = " << &ref_value << endl;
     cout << "*ptr_value = " << *ptr_value << ", "
          << "address = " << ptr_value << endl;
}