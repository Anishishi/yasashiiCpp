#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "整数を入力してください。\n";

    cin >> res;

    switch(res){
        case 1:
            cout << "１が入力されました。\n";
            break;
        case 2:
            cout << "２が入力されました。\n";
            break;
        default:
            cout << "１か２を入力してください。\n";
            break;
    }
    
    return 0;
}