#include<bits\stdc++.h>
using namespace std;
class TAMGIAC
{
    float a, b, c;
public:
    float operator+();
    friend istream& operator>>(istream& x, TAMGIAC& y);
    friend ostream& operator<<(ostream& x, TAMGIAC y);
};
istream& operator>>(istream& x, TAMGIAC& y){
    cout<<"Nhap a: ";
    x>>y.a;
    cout<<"Nhap b: ";
    x>>y.b;
    cout<<"Nhap c: ";
    x>>y.c;
    return x;
}
ostream& operator<<(ostream& x, TAMGIAC y){
    x<<"Canh a la: "<<y.a<<endl;
    x<<"Canh b la: "<<y.b<<endl;
    x<<"Canh c la: "<<y.c<<endl;
    x<<"Chu vi la: "<<+y<<endl;
    return x;
}
float TAMGIAC::operator+(){
    return a+b+c;
}
int main(){
    TAMGIAC P, Q;
    cout<<"Nhap tam giac P: "<<endl;
    cin>>P;
    cout<<"Nhap tam giac Q: "<<endl;
    cin>>Q;
    ofstream f("TAMGIAC.txt", ios::app);
    f<<"Tam giac P: "<<endl;
    f<<P<<endl;
    f<<"Tam giac Q: "<<endl;
    f<<Q<<endl;
    f.close();
    return 0;
}