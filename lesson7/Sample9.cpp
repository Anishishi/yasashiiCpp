#include <iostream>
using namespace std;

//max関数の定義(inline function)
inline int max(int x, int y){if(x<y) return y; else return x;}

int  main()
{
    int num1, num2, ans;
    cout << "一番目の整数を入力してください。\n";
    cin >> num1;
    cout << "二番目の整数を入力してください。\n";
    cin >> num2;
    ans = max(num1, num2);
    cout << "最大値は" << ans << "です。\n";
    return 0;
}