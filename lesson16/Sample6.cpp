#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::left, ios::adjustfield);
    for(int i=0; i<=5; i++){
        cout.width(5);
        cout.fill('-');
        cout << i;
    }
    cout << endl;
    cout.unsetf(ios::left);
    cout.setf(ios::right, ios::adjustfield);
    for(int j=0; j<=5; j++){
        cout.width(5);
        cout.fill('-');
        cout << j;
    }
    cout << endl;

    cout << "10を10進数で" << dec << 10 << "です。\n";
    cout << "10を8進数で" << oct << 10 << "です。\n";
    cout << "12を8進数で" << 12 << "です。\n";
    cout << "10を16進数で" << hex << 10 << "です。\n";

    return 0;
}