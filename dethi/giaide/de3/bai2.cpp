#include<bits\stdc++.h>
using namespace std;
class VECTOR
{
    int x, y;
public:
    VECTOR();
    VECTOR(int a, int b);
    VECTOR operator-(VECTOR f);
    VECTOR operator+(VECTOR f);
    friend istream &operator>>(istream &x, VECTOR& f);
    friend ostream &operator<<(ostream &x, VECTOR f);
};
VECTOR::VECTOR(){
    x = y = 0;
}
VECTOR::VECTOR(int a, int b){
    x = a;
    y = b;
}
istream& operator>>(istream& x, VECTOR& f){
    cout<<"Nhap x: "; x>>f.x;
    cout<<"Nhap y: "; x>>f.y;
    return x;
}
ostream& operator<<(ostream& x, VECTOR f){
    x<<"x = "<<f.x<<endl;
    x<<"y = "<<f.y<<endl;
    return x;
}
VECTOR VECTOR::operator+(VECTOR f){
    VECTOR tg;
    tg.x = x + f.x;
    tg.y = y + f.y;
    return tg;
}
VECTOR VECTOR::operator-(VECTOR f){
    VECTOR tg;
    tg.x = x - f.x;
    tg.y = y - f.y;
    return tg;
}
int main(){
    VECTOR a, b;
    cout<<"Nhap vector a: "<<endl;
    cin>>a;
    cout<<"Nhap vector b: "<<endl;
    cin>>b;
    VECTOR c = a + b;
    VECTOR d = a - b;
    cout<<"Tong hai vector la: "<<endl;
    cout<<c<<endl;
    cout<<"Hieu hai vector la: "<<endl;
    cout<<d<<endl;
    return 0;
}