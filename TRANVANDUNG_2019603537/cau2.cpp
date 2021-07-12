#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class NhiThuc
{
private:
    double a, b;

public:
    NhiThuc();
    NhiThuc(double a, double b);
    ~NhiThuc();
    NhiThuc operator-();
    friend istream& operator>>(istream& x, NhiThuc& y);
    friend ostream& operator<<(ostream& x, NhiThuc y);
};

NhiThuc::NhiThuc()
{
    a = 0;
    b = 0;
}

NhiThuc::NhiThuc(double a, double b)
{
    this->a = a;
    this->b = b;
}

NhiThuc::~NhiThuc()
{
    a = 0;
    b = 0;
}

NhiThuc NhiThuc::operator-()
{
    this->a = -a;
    this->b = -b;
    return *this;
}

istream& operator>>(istream& x, NhiThuc& y)
{
    cout << "Nhap a = ";
    x >> y.a;
    cout << "Nhap b = ";
    x >> y.b;
    return x;
}

ostream& operator<<(ostream& x, NhiThuc y)
{
    x << y.a << "x + " << y.b;
    return x;
}

int main()
{
    NhiThuc a;

    cout << "Nhap thong tin nhi thuc: " << endl;
    cin >> a;

    cout << "Nhi thuc vua nhap: " << a << endl;

    a = -a;

    cout << "Nhi thuc vua doi dau: " << a << endl;

    return 0;
}