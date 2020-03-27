#include <iostream>
using namespace std;

//列挙型weekの宣言
enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
    Week w;
    w = SUN;

    switch(w){
        case SUN: cout << "日曜日です。\n"; break;
        case MON: cout << "月曜日です。\n"; break;
        case TUE: cout << "火曜日です。\n"; break;
        case WED: cout << "水曜日です。\n"; break;
        case THU: cout << "木曜日です。\n"; break;
        case FRI: cout << "金曜日です。\n"; break;
        case SAT: cout << "土曜日です。\n"; break;
        default: cout << "何曜日だかわかりません。\n"; break;
    }

    return 0;
}