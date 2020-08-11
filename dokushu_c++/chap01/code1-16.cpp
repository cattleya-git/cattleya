#include<iostream>
#include<string>

int main()
{
    using std::cout;
    using std::endl;

    char string[]="yuri\0_ebihara";
    cout<<string<<endl;

    //std::string s="yuri\0_ebihara";
    cout << static_cast<std::string>(string) << endl;
}