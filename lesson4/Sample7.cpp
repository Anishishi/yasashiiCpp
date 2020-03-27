#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;
    cout << "short int型のサイズ：" << sizeof(short int) << "バイトです。\n";
    cout << "int型のサイズ：" << sizeof(int) << "バイトです。\n";
    cout << "long int型のサイズ：" << sizeof(long int) << "バイトです。\n";
    cout << "float型のサイズ：" << sizeof(float) << "バイトです。\n";
    cout << "double型のサイズ：" << sizeof(double) << "バイトです。\n";
    cout << "long double型のサイズ：" << sizeof(long double) << "バイトです。\n";
    cout << "変数aのサイズ：" << sizeof(a) << "バイトです。\n";
    cout << "式a+bのサイズ：" << sizeof(a+b) << "バイトです。\n";

    return 0;
}