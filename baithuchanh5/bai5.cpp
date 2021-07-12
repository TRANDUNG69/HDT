#include<bits\stdc++.h>

using namespace std;
class ARRAY
{
    float *a;
    int n;

public:
    ARRAY operator++();
    ARRAY operator--();
    friend ostream &operator<<(ostream &x, ARRAY y);
    friend istream &operator>>(istream &x, ARRAY &y);
};
ARRAY ARRAY::operator++()
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                float tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    return *this;
}
ARRAY ARRAY::operator--()
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                float tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    return *this;
}
istream &operator>>(istream &x, ARRAY &y)
{
    cout << "n=";
    x >> y.n;
    y.a = new float[y.n];
    for (int i = 0; i < y.n; i++)
    {
        cout << "a[" << i << "]=";
        x >> y.a[i];
    }
    return x;
}
ostream &operator<<(ostream &x, ARRAY y)
{
    for (int i = 0; i < y.n; i++)
        x << y.a[i] << " ";
    return x;
}
int main()
{
    ARRAY x;
    cout << "Nhap mang x:" << endl;
    cin >> x;
    x = ++x;
    cout << "Mang x da sap tang: " << endl;
    cout << x << endl;
    x = --x;
    cout << "Mang x da sap giam:" << endl;
    cout << x << endl;
    return 0;
}