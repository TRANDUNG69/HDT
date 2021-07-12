#include<bits\stdc++.h>
using namespace std;
class THOIGIAN
{
    int GIO, PHUT, GIAY;
public:
    THOIGIAN();
    THOIGIAN(int x, int  y, int z);
    THOIGIAN operator-(THOIGIAN y);
    friend istream &operator>>(istream &x, THOIGIAN &y);
    friend ostream &operator<<(ostream &x, THOIGIAN y);
};
THOIGIAN::THOIGIAN(int x, int y, int z)
{
    GIO = x;
    PHUT = y;
    GIAY = z;
}
THOIGIAN::THOIGIAN(){
    GIO = PHUT = GIAY = 0;
}
istream& operator>>(istream& x, THOIGIAN& y){
    cout<<"Nhap gio: ";x>>y.GIO;
    cout<<"Nhap phut: ";x>>y.PHUT;
    cout<<"Nhap giay: ";x>>y.GIAY;
    return x;
}
ostream& operator<<(ostream& x, THOIGIAN y){
    x<<"GIO = "<<y.GIO<<endl;
    x<<"PHUT = "<<y.PHUT<<endl;
    x<<"GIAY = "<<y.GIAY<<endl;
    return x;
}
THOIGIAN THOIGIAN::operator-(THOIGIAN y){
    THOIGIAN tg;
    tg.GIO = GIO - y.GIO;
    tg.PHUT = PHUT - y.PHUT;
    tg.GIAY = GIAY - y.GIAY;
    return tg;
}
int main(){
    THOIGIAN a, b;
    cout<<"Nhap thoi gian a: "<<endl;
    cin>>a;
    cout<<"Nhap thoi gian b: "<<endl;
    cin>>b;
    THOIGIAN c = a - b;
    cout<<"Hieu thoi gian la: "<<endl;
    cout<<c<<endl;
}