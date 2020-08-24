#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string s;
    cout << "INPUT_LINE << ";
    std::getline(cin, s);
    cout << "OUTPUT_LINE >> " << s << endl;
}