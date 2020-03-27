#include <iostream>
using namespace std;

//クラスの宣言
class Point{
    private:
        int x_data;
        int y_data;
    public:
        void setX(int a);
        void setY(int b);
        int getX(){return x_data;}
        int getY(){return y_data;}
};

//クラス関数の定義
void Point::setX(int a)
{
    if (a<=10 && a>=0){
        x_data = a;
    }else{
        cout << "0 <= X <= 10 is not satisfied.\n";
    }
}
void Point::setY(int b)
{
    if (b<=10 && b>=0){
        y_data = b;
    }else{
        cout << "0 <= Y <= 10 is not satisfied.\n";
    }
}

int main()
{
    int x, y;
    cout << "X座標を入力してください。\n";
    cin >> x;
    cout << "Y座標を入力してください。\n";
    cin >> y;

    Point p1;

    p1.setX(x);
    p1.setY(y);

    cout << "座標は(" << p1.getX() << ',' << p1.getY() << ")です。\n";
    return 0;
}
