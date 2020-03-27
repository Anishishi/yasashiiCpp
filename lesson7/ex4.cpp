#include <iostream>
using namespace std;

template <class T>
T square(T x)
{
    return x*x;
}

int main()
{
    int tmp;
    cout << "整数を入力してください。\n";
    cin >> tmp;
    cout << tmp << "の2乗は" << square(tmp) << "です。\n";

    double tmp_d;
    cout << "小数を入力してください。\n";
    cin >> tmp_d;
    cout << tmp_d << "の2乗は" << square(tmp_d) << "です。\n";

    return 0;
}