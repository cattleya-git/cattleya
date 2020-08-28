#include <iostream>
using std::cout;
using std::endl;

int sum(int a, int b)
{
    return a + b;
}
int sum(int i, int j, int k)
{
    return sum(i, j) + k; // 確かに便利かも
}

int main()
{
    int x = 12, y = 24, z = 36;
    cout << "x+y= " << sum(x, y) << endl;
    cout << "x+y+z= " << sum(x, y, z) << endl;
}