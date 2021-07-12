#include<bits\stdc++.h>
using namespace std;
class PS
{
    int TS, MS;
public:
    PS operator+(PS y);
    PS operator-(PS y);
    PS operator*(PS y);
    PS operator/(PS y);
    double operator-();
    friend istream &operator>>(istream &x, PS &y);
    friend ostream &operator<<(ostream &x, PS y);
};
istream& operator>>(istream& x, PS& y){
    cout<<"Nhap TS: "; x>>y.TS;
    cout<<"Nhap MS: "; x>>y.MS;
    return x;
}
ostream& operator<<(ostream& x, PS y){
    x<<y.TS<<":"<<y.MS;
    return x;
}
double PS::operator-(){
    return (double) TS/ MS;
}
PS PS::operator-(PS y){
    PS tg;
    tg.TS = TS * y.MS - MS * y.TS;
    tg.MS = MS * y.MS;
    return tg;
}
PS PS::operator+(PS y){
    PS tg;
    tg.TS = TS * y.MS + MS * y.TS;
    tg.MS = MS * y.MS;
    return tg;
}
PS PS::operator*(PS y){
    PS tg;
    tg.TS = TS * y.TS;
    tg.MS = MS * y.MS;
    return tg;
}
PS PS::operator/(PS y){
    PS tg;
    tg.TS = TS * y.MS;
    tg.MS = MS * y.TS;
    return tg;
}
int main(){
    PS a, b;
    cout<<"Nhap phan so thu nhat: "<<endl;
    cin>>a;
    cout<<"Nhap phan so thu hai: "<<endl;
    cin>>b;
    PS TONG = a + b;
    PS HIEU = a - b;
    PS TICH = a * b;
    PS THUONG = a / b;
    ofstream f("PS.txt", ios::app);
    f<<a<<" + "<<b<<" = "<<TONG<<" = "<<-TONG<<endl;
    f<<a<<" - "<<b<<" = "<<HIEU<<" = "<<-HIEU<<endl;
    f<<a<<" * "<<b<<" = "<<TICH<<" = "<<-TICH<<endl;
    f<<a<<" : "<<b<<" = "<<THUONG<<" = "<<-THUONG<<endl;
    f.close();
    //TODO Ghi file
    ifstream f1("PS.txt", ios::in);
    char S[200];
    while(!f1.eof()){
        f1.getline(S, 200);
        cout<<S<<endl;
    }
    f1.close();
    //! Đọc file
    return 0;
}