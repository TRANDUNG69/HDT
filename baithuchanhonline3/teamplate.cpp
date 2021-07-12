#include<bits\stdc++.h>
using namespace std;
template <class T> class MATRIX
{
    int n, m;
    T **a;
public:
    void nhap();
    void xuat();
    MATRIX operator!();
}; 
template <class T> void MATRIX<T>::nhap(){
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Nhap m: ";
    cin>>m;
    a = new T*[n];
    for(int i = 0; i < n; i++)  
        a[i] = new T[m];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++){
        cout<<"a["<<i<<"]["<<i<<"] = ";
        cin>>a[i][j];
    }
}
template <class T> void MATRIX<T>::xuat(){
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout<<setw(3)<<a[i][j];
        cout<<endl;
    }
}
template <class T> MATRIX<T> MATRIX<T>::operator!(){
    MATRIX tg;
    tg.n = n;
    tg.m = m;
    tg.a = new T*[tg.n];
    for(int i = 0; i < tg.n; i++)
        tg.a[i] = new T[tg.m];
    for(int i = 0; i < tg.n; i++)
    for(int j = 0; j <tg.m; j++){
        tg.a[i][j] = a[j][i];
    }
    return tg;
}
int main(){
    MATRIX<double> P;
    P.nhap();
    P = !P;
    P.xuat();
    MATRIX<long> Q;
    Q.nhap();
    Q = !Q;
    Q.xuat();
    return 0;
}