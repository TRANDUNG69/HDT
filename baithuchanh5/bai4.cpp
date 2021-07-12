#include<bits\stdc++.h>
using namespace std;
class MATRIX
{
    int n, m;
    double **a;
public:
    MATRIX operator-();
    MATRIX operator+(MATRIX y);
    MATRIX operator-(MATRIX y);
    friend istream &operator>>(istream &x, MATRIX& y);
    friend ostream &operator<<(ostream &x, MATRIX y);
};
istream& operator>>(istream& x, MATRIX& y){
    cout<<"Nhap n: ";
    x>>y.n;
    cout<<"Nhap m: ";
    x>>y.m;
    y.a = new double*[y.n];
    for(int i = 0; i < y.n; i++)
        y.a[i] = new double[y.m];
    for(int i = 0; i < y.n; i++)
    for(int j = 0; j < y.m; j++)
    {
        cout<<"a["<<i<<"]["<<j<<"] = ";
        x>>y.a[i][j];
    }
    return x;
}
ostream& operator<<(ostream& x, MATRIX y){
    for(int i = 0; i < y.n; i++){
        for(int j = 0; j < y.m; j++)
            x<<y.a[i][j]<<"   ";
        x<<endl<<endl;
    }
    return x;
}
MATRIX MATRIX::operator+(MATRIX y){
    MATRIX tg;
    if(m == y.m && n == y.n){
        tg.n = n;
        tg.m = m;
        tg.a = new double*[n];
        for(int i = 0; i < n; i++)
            tg.a[i] = new double[m];
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            tg.a[i][j] = a[i][j] + y.a[i][j];
        }
    }
    else{
        cout<<"Hai ma tran khong cung kich thuoc"<<endl;
        tg.n = tg.m = 0;
        // tg.a = NULL;
    }
    return tg;
}
MATRIX MATRIX::operator-(MATRIX y){
    MATRIX tg;
    if(m == y.m && n == y.n){
        tg.n = n;
        tg.m = m;
        tg.a = new double*[n];
        for(int i = 0; i < n; i++)
            tg.a[i] = new double[m];
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            tg.a[i][j] = a[i][j] - y.a[i][j];
        }
    }
    else{
        cout<<"Hai ma tran khong cung kich thuoc"<<endl;
        tg.n = tg.m = 0;
    }
    return tg;
}
MATRIX MATRIX::operator-(){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    a[i][j] = -a[i][j];
    return *this;
}
int main(){
    MATRIX P, Q;
    cout<<"Nhap ma tran P: "<<endl;
    cin>>P;
    cout<<"Nhap ma tran Q: "<<endl;
    cin>>Q;
    P = -P;
    Q = -Q;
    cout<<"Ma tran P sau khi doi dau la: "<<endl;
    cout<<P<<endl;
    cout<<"Ma tran Q sau khi doi dau la: "<<endl;
    cout<<Q<<endl;
    MATRIX M = P + Q;
    MATRIX N = P - Q;
    cout<<"Tong hai ma tran doi dau la: "<<endl;
    cout<<M<<endl;
    cout<<"Hieu hai ma tran doi dau la: "<<endl;
    cout<<N<<endl;
    return 0;
}