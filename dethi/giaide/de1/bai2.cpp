#include<bits\stdc++.h>
using namespace std;
class DIEM
{
    int x, y, z;
public:
    DIEM(float a, float b, float c);
    DIEM();
    DIEM operator+(DIEM f);
    friend istream &operator>>(istream& x, DIEM& f);
    friend ostream &operator<<(ostream& x, DIEM f);
};
DIEM::DIEM(){
    x = y = z = 0;
}
DIEM::DIEM(float a, float b, float c){
    a = x;
    b = y;
    c = z;
}
istream& operator>>(istream& x, DIEM& f){
    cout<<"Nhap x: "; x>>f.x;
    cout<<"Nhap y: "; x>>f.y;
    cout<<"Nhap z: "; x>>f.z;
    return x;
}
ostream& operator<<(ostream& x , DIEM f){
    x<<"x = "<<f.x<<endl;
    x<<"y = "<<f.y<<endl;
    x<<"z = "<<f.z<<endl;
    return x;
}
DIEM DIEM::operator+(DIEM f){
    DIEM tg;
    tg.x = x + f.x;
    tg.y =y + f.y;
    tg.z = z + f.z;
    return tg;
}
int main(){
    DIEM a, b;
    cout<<"Nhap diem a: "<<endl;
    cin>>a;
    cout<<"Nhap diem b: "<<endl;
    cin>>b;
    DIEM c = a + b;
    cout<<"Diem vua cong la: "<<endl;
    cout<<c<<endl;
    return 0;
}