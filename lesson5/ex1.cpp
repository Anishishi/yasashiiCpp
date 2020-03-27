#include <iostream>
using namespace std;

int main()
{
    cout << "整数を入力してください。\n";
    int tmp;
    cin >> tmp;
    if (tmp%2==1){
        cout << tmp << "は奇数です。\n";
    }else{
        cout << tmp << "は偶数です。\n";
    }

    return 0;
}