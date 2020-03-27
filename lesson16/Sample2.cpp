#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "入力したものをそのまま返します。'@'で次に進みます。\n";
    while(cin.get(ch)){
        if(ch=='@'){
            break;
        }
        cout.put(ch);
    }

    for(int i=0; i<=10; i++){
        cout.width(3);
        cout.fill('-');
        cout << i;
    }
    cout << '\n';

    cout << "円周率を出力します。有効数字何桁で出力しますか？\n";
    double pi=3.141592;
    int num;
    cin >> num;
    cout.precision(num);
    cout << "円周率は" << pi << "です。\n";
    
    return 0;
}