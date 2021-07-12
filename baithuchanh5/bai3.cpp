#include<bits\stdc++.h>
using namespace std;
class TTB2
{
    float a, b, c;
public:
    TTB2();
    TTB2(float d, float e, float f);
    TTB2 operator-(TTB2 y);
    TTB2 operator+(TTB2 y);
    TTB2 operator-();
    friend istream &operator>>(istream &x, TTB2 &y);
    friend ostream &operator<<(ostream &x, TTB2 y);
};
TTB2::TTB2(){
    a=b=c=0;
}
TTB2::TTB2(float d, float e, float f){
    a = d;
    b = e;
    c = f;
}
istream& operator>>(istream& x, TTB2& y){
    cout<<"Nhap a: "; x>>y.a;
    cout<<"Nhap b: "; x>>y.b;
    cout<<"Nhap c: "; x>>y.c;
    return x;
}
ostream& operator<<(ostream& x, TTB2 y){
    x<<y.a<<"x"<<(char)253<<" + "<<y.b<<"x + "<<y.c;
    return x;
}
// TTB2 TTB2::operator-(){
//     TTB2 tg;
//     tg.a = -a;
//     tg.b = -b;
//     tg.c = -c;
//     return tg;
// }
TTB2 TTB2::operator-(){ 
    a = -a;
    b = -b;
    c = -c;
    return *this;
}
TTB2 TTB2::operator-(TTB2 y){ 
    TTB2 tg;
    tg.a = a - y.a;
    tg.b = b - y.b;
    tg.c = c - y.c;
    return tg;
}
TTB2 TTB2::operator+(TTB2 y){ 
    TTB2 tg;
    tg.a = a + y.a;
    tg.b = b + y.b;
    tg.c = c + y.c;
    return tg;
}
int main(){
    TTB2 P, Q;
    cout<<"Nhap tam thuc bac hai thu nhat: "<<endl;
    cin>>P;
    cout<<"Nhap tam thuc bac hai thu hai: "<<endl;
    cin>>Q;
    TTB2 C = -P;
    TTB2 D = -Q;
    cout<<"Tam thuc thu nhat sau khi dao dau la: "<<C<<endl;
    cout<<"Tam thuc thu hai sau khi dao dau la: "<<D<<endl;
    TTB2 A = C - D;
    TTB2 B = C + D;
    cout<<"Tru hai tam thuc sau khi doi dau la: "<<A<<endl;
    cout<<"Cong hai tam thuc sau khi doi dau la: "<<B<<endl;
    return 0;
}

