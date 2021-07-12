#include<bits\stdc++.h>
using namespace std;
class SP
{
    float a, b;
public:
    SP operator-(SP y);
    SP operator+(SP y);
    friend istream &operator>>(istream &x, SP &y);
    friend ostream &operator<<(ostream &x, SP y);
};
istream& operator>>(istream& x, SP& y){
    cout<<"Nhap phan thuc a: "; x>>y.a;
    cout<<"Nhap phan thuc b: "; x>>y.b;
    return x;
}
ostream& operator<<(ostream& x, SP y){
    x<<y.a<<" + i*"<<y.b;
    return x;
}
SP SP::operator-(SP y){
    SP tg;
    tg.a = a - y.a;
    tg.b = b - y.b;
    return tg;
}
SP SP::operator+(SP y){
    SP tg;
    tg.a = a + y.a;
    tg.b = b + y.b;
    return tg;
}
int main(){
    SP SP1, SP2;
    cout<<"Nhap so phuc thu nhat: "<<endl;
    cin>>SP1;
    cout<<"Nhap so phuc thu hai: "<<endl;
    cin>>SP2;
    SP SP3 = SP1 + SP2;
    SP SP4 = SP1 - SP2;
    ofstream f("SP.txt", ios::app);
    f<<"Tong hai so phuc la: "<<SP3<<endl;
    f<<"Hieu hai so phuc la: "<<SP4<<endl;
    f.close();
    cout<< "Tong hai so phuc la: " << SP3 << endl;
    cout<< "Hieu hai so phuc la: " << SP4 << endl;
    return 0;
}