#include <iostream>
using namespace std;

int max(int num[]);

int main()
{
    int test[5];
    for (int i=0; i<5; i++){
        cin >> test[i];
    }
    cout << "最高点は" << max(test) << "点です。\n";
    return 0;
}

int max(int num[5])
{
    int m=num[0];
    for (int i=0; i<4; i++){
        if (num[i]<num[i+1]){
            m=num[i+1];
        }
    }
    return m;
}