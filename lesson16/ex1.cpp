#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=30; i++){
        cout.width(3);
        cout.fill('-');
        cout << i;
        if(i%5==0){
            cout << endl;
        }
    }
    return 0;
}