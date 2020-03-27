#include <iostream>
using namespace std;

int main()
{
    cout << "２つの整数を入力してください。\n";
    int tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    if (tmp1==tmp2){
        cout << "２つの数は同じ値です。\n";
    }else if(tmp1<tmp2){
        cout << tmp1 << "より" << tmp2 << "のほうが大きい値です。\n";
    }else{
        cout << tmp2 << "より" << tmp1 << "のほうが大きい値です。\n";
    }

    return 0;
}