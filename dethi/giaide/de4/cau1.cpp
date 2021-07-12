#include <bits\stdc++.h>

using namespace std;
class Vector
{
private:
    int n;
    float *a;

public:
    Vector();
    Vector(int n, float *a);
    ~Vector();
    friend istream &operator>>(istream &is, Vector &x);
    friend ostream &operator<<(ostream &os, Vector x);
    float findMinOfVector();
    float findMaxOfVector();
};

Vector::Vector()
{
    n = 0;
    a = NULL;
}

Vector::Vector(int n, float *a)
{
    this->n = n;
    this->a = new float[n];
    for (int i = 0; i < n; i++)
    {
        this->a[i] = a[i];
    }
}

Vector::~Vector()
{
    n = 0;
    delete[] a;
}

istream &operator>>(istream &is, Vector &x)
{
    cout << "Nhap n = ";
    is >> x.n;
    x.a = new float[x.n];
    for (int i = 0; i < x.n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        is >> x.a[i];
    }
    return is;
}

ostream &operator<<(ostream &os, Vector x)
{
    os << "So chieu: " << x.n << endl;
    os << "Chieu: ";
    for (int i = 0; i < x.n; i++)
    {
        os << x.a[i] << " ";
    }
    os << endl;
    return os;
}

float Vector::findMaxOfVector()
{
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

float Vector::findMinOfVector()
{
    float min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    Vector vt;

    cout << "Nhap thong tin vt" << endl;

    cin >> vt;

    cout << vt;
    cout << "Max: " << vt.findMaxOfVector() << endl;
    cout << "Min: " << vt.findMinOfVector() << endl;

    return 0;
}