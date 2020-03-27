#include <iostream>
using namespace std;

int main()
{
    int num;
    int* pT;
    
    cout << "何人のテストの点数を入力しますか。\n";
    cin >> num;
    pT = new int[num];
    cout << "人数分の点数を入力してください。\n";
    for (int i=0; i<num; i++){
        cin >> pT[i];
    }
    for (int i=0; i<num; i++){
        cout << i+1 << "番目の人の点数は" << pT[i] << "です。\n";
    }
    delete[] pT;
    
    return 0;
}