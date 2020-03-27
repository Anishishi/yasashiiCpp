#include <iostream>
using namespace std;

struct Person{
    int age;
    double weight;
    double height;
};

void increment(Person* p);
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

    show(&p1);
    increment(&p1);
    cout << "一年が過ぎました。\n";
    show(&p1);

    return 0;
}

void increment(Person* p)
{
    if(p->age<12){
        p->height+=5.0;
        p->weight+=3.0;
    }else if(p->age<18){
        p->height+=2.0;
        p->weight+=2.0;
    }else{
        p->weight+=0.5;
    }
    p->age++;
}
void show(Person* p)
{
    cout << "年齢" << p->age << "体重" << p->weight << "身長" << p->height << '\n';
}