#include <iostream>
using namespace std;

int main()
{
    cout << "テストの点数を入力してください。(0で終了)\n";
    int sum=0;
    int tmp;
    do{
        cin >> tmp;
        sum += tmp;
    }while(tmp!=0);
    cout << "テストの合計点は" << sum << "です。\n";
    return 0;
}