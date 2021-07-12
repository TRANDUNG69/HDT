#include<bits\stdc++.h>

using namespace std;
class HANG
{
    char MAH[10];
    char TENH[30];
    float DONGIA;
public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout<<"Nhap ma hang: ";fflush(stdin);gets(MAH);
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENH);
    cout<<"Nhap don gia: ";cin>>DONGIA;
}
void HANG::xuat(){
    cout<<setw(15)<<MAH<<setw(25)<<TENH<<setw(15)<<DONGIA<<endl;
}
class PHIEU
{
    char MAP[10];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap(){
    cout<<"Nhap ma phieu: ";fflush(stdin);gets(MAP);

    cout<<"Nhap n: ";
    cin>>n;
    x = new HANG[n];

    for(int i = 0; i < n; i++)
        x[i].nhap();
}
void PHIEU::xuat(){
    cout<<setw(50)<<"----------XUAT PHIEU----------"<<endl;
    cout<<"Ma phieu: "<<MAP<<endl;

    cout<<setw(15)<<"Ma hang"<<setw(25)<<"Ten hang"<<setw(15)<<"Don gia"<<endl;

    for(int i = 0; i < n; i++)
        x[i].xuat();
}
int main(){
    PHIEU a;
    a.nhap();
    a.xuat();
}
