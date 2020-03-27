#include <iostream>
using namespace std;

//carクラスの宣言
class Car{
    private:
        int num;
        double gas;
    public:
        int getNum(){return num;}
        double getGas(){return gas;}
        void show();
        void setNumGas(int n, double g);
};

//carクラスメンバ関数の定義
void Car::show()
{
    cout << "車のナンバーは" << num << "です。\n";
    cout << "ガソリン量は" << gas << "です。\n";
}
void Car::setNumGas(int n, double g)
{
    if(g>0 && g<1000){
        num = n;
        gas = g;
        cout << "ナンバーを" << num << "にガソリン量を" << gas << "にしました。\n";
    }else{
        cout << g << "は正しいガソリン量ではありません。\n";
        cout << "ガソリン量を変更できませんでした。\n";
    }
}

//buy関数の宣言
void buy(Car* pC);

int main()
{
    //①Car car1;
    Car* pC;
    pC = new Car;

    //このようなアクセスはできなくなります。
    //car1.num = 1234;
    //car1.gas = 20.5;

    //①car1.setNumGas(1234, 20.5);
    pC->setNumGas(1234, 20.5);

    //①buy(&car1);
    buy(pC);


    return 0;
}

//buy関数の定義
void buy(Car* pC)
{
    int n=pC->getNum();
    double g=pC->getGas();
    cout << "ナンバー" << n << "ガソリン量" << g << "の車を購入しました。\n";
}