#include <iostream>
using namespace std;

int count(char str[], char ch);

int main()
{
    cout << "文字列を入力してください。\n";
    char tmp[100];
    cin >> tmp;
    cout << "文字列から探す文字を入力してください。\n";
    char c;
    cin >> c;
    cout << tmp << "の中には" << c << "は全部で" << count(tmp, c) << "個あります。\n";
    return 0;
}

int count(char str[], char ch)
{
    int i=0;
    int counter=0;
    while (str[i]!='\0'){
        if (str[i]==ch){
            counter++;
        }
        i++;
    }
    return counter;
}