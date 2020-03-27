#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        void show();
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "車を作成しました。\n";
}
void Car::show()
{
    cout << "num = " << num << '\n';
    cout << "gas = " << gas << '\n';
}

int main()
{
    Car car1;
    car1.show();
    return 0;
}