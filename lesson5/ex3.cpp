#include <iostream>
using namespace std;

int main()
{
    int result;
    cout << "成績評価１〜５を整数値で入力してください。\n";
    cin >> result;
    switch (result){
        case 1:
            cout << "成績は１です。もっと頑張りましょう。\n";
            break;
        case 2:
            cout << "成績は２です。もう少し頑張りましょう。\n";
            break;
        case 3:
            cout << "成績は３です。さらに上を目指しましょう。\n";
            break;
        case 4:
            cout << "成績は４です。大変よくできました。\n";
            break;
        default:
            cout << "成績は５です。大変優秀です。\n";
            break;
    }

    return 0;
}