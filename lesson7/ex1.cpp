#include <iostream>
using namespace std;

int square(int x);
double square(double x);

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

int square(int x)
{
    return x*x;
}
double square(double x)
{
    return x*x;
}