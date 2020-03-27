#include <iostream>
using namespace std;

int length(char* str);

int main()
{
    char tmp[100];
    cout << "文字列を入力してください。\n";
    cin >> tmp;
    cout << "文字列の長さは" << length(tmp) << "です。\n";
    return 0;
}

int length(char* str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}