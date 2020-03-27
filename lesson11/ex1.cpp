#include <iostream>
using namespace std;

struct Person{
    int age;
    double weight;
    double height;
};

void show(Person* p);

int main()
{
    Person p1 = {0, 0.0, 0.0};
    cout << "年齢を入力してください。\n";
    cin >> p1.age;
    cout << "体重を入力してください。\n";
    cin >> p1.weight;
    cout << "身長を入力してください。\n";
    cin >> p1.height;
    Person p2 = {0, 0.0, 0.0};
    cout << "年齢を入力してください。\n";
    cin >> p2.age;
    cout << "体重を入力してください。\n";
    cin >> p2.weight;
    cout << "身長を入力してください。\n";
    cin >> p2.height;

    show(&p1);
    show(&p2);

    return 0;
}

void show(Person* p)
{
    cout << "年齢" << p->age << "体重" << p->weight << "身長" << p->height << '\n';
}