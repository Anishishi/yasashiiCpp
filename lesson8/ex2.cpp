//ポインタによる渡し
#include <iostream>
using namespace std;

void add(int* x1, int* x2, int a);

int main()
{
    int x1, x2, a;
    cout << "２科目分の点数を入力してください。\n";
    cin >> x1 >> x2;
    cout << "加算する点数を入力してください。\n";
    cin >> a;

    add(&x1, &x2, a);

    cout << a << "点加算しましたので\n" << "科目1は" << x1 << "点となりました。\n" << "科目2は" << x2 << "点となりました。\n";

    return 0;
}

void add(int* x1, int* x2, int a)
{
    *x1 += a;
    *x2 += a;
}