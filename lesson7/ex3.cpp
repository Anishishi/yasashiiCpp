#include <iostream>
using namespace std;

inline int square(int x){return x*x;};
inline double square(double x){return x*x;};

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