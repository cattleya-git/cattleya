#include<iostream>

int main()
{
    using std::cout;
    using std::endl;

    int array[]={ 1, 2, 3 };
    for (int elem:array)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    int array01[5]={ 7, 8, 9 };
    for (int elem:array01)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    int array02[7]={};
    for (int elem:array02)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}