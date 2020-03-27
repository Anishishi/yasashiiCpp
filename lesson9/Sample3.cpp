#include <iostream>
using namespace std;

int main()
{
    const int num = 5;
    int test[num];

    cout << num << "人の点数を入力してください。\n";
    for (int i=0; i<num; i++){
        cin >> test[i];
    }

    for (int i=0; i<num-1; i++){
        for (int j=i+1; j<num; j++){
            if (test[i] < test[j]){
                int tmp=test[i];
                test[i]=test[j];
                test[j]=tmp;
            }
        }
    }

    for (int i=0; i<num; i++){
        cout << i+1 << "番目の人の点数は" << test[i] << "です。\n";
    }

    return 0;
}