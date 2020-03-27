#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        static int sum;
        Car();
        void setCar(int n, double g);
        void show();
        static void showSum();
};

Car::Car()
{
    num=0;
    gas=0.0;
    sum++;
    cout << "車を作成しました。\n";
}
void Car::setCar(int n, double g)
{
    num=n;
    gas=g;
    cout << "ナンバーを" << num << "にガソリン量を" << gas << "にしました。\n";
}
void Car::show()
{
    cout << "車ののナンバーは" << num << "です。\n";
    cout << "ガソリン量は" << gas << "です。\n";
}
void Car::showSum()
{
    cout << "車は全部で" << sum << "台あります。\n";
}

int Car::sum=0;

int main()
{
    Car::showSum();

    Car Car1;
    Car1.setCar(1234, 20.5);

    Car::showSum();

    Car car2;
    car2.setCar(4567, 30.5);

    Car::showSum();

    return 0;
}