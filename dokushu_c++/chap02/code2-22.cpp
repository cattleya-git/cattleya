#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s;
    do
    {
        cout << "INPUT << ";
        std::getline(cin, s);
        cout << "OUTPUT >> " << s << endl;
    } while (s != "");
}