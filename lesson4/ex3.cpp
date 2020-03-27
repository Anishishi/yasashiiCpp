#include <iostream>
using namespace std;

int main()
{
    int  sum = 0;
    int tmp;
    cout << "科目１の点数を入力してください。\n";
    cin >> tmp;
    sum+=tmp;
    cout << "科目２の点数を入力してください。\n";
    cin >> tmp;
    sum+=tmp;
    cout << "科目３の点数を入力してください。\n";
    cin >> tmp;
    sum+=tmp;
    cout << "科目４の点数を入力してください。\n";
    cin >> tmp;
    sum+=tmp;
    cout << "科目５の点数を入力してください。\n";
    cin >> tmp;
    sum+=tmp;
    cout << "５科目の合計点は" << sum << "点です\n";
    cout << "５科目の平均点は" << sum/5.0 << "点です。\n";

    return 0;
}