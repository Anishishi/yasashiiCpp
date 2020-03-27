#include <iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int a=0, int b=0){x=a, y=b;}
        void show(){cout << "x:" << x << ",y:" << y << '\n';}
        void setX(int a){x=a;}
        void setY(int b){y=b;}
        Point operator-(Point p);
        Point operator--();
        Point operator--(int d);
};


Point Point::operator-(Point p)
{
    Point tmp;
    tmp.x = x - p.x;
    tmp.y = y - p.y;
    return tmp;
}
Point Point::operator--()
{
    x--;
    y--;
    return *this;
}
Point Point::operator--(int d)
{
    x--;
    y--;
    return *this;
}

int main()
{
    Point p1(2, 3);
    --p1;
    p1--;
    p1.show();

    Point p2(10, 30);
    Point p = p1-p2;
    p.show();

    return 0;
}