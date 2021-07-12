#include<bits\stdc++.h>

using namespace std;

class QUANLY
{
    char MAQL[10];
    char HOTEN[30];
public: 
    void nhap();
    void xuat();
};
void QUANLY::nhap(){
    cout<<"Nhap ma quan ly: ";fflush(stdin);gets(MAQL);
    cout<<"Nhap ho ten quan ly: ";fflush(stdin);gets(HOTEN);
}
void QUANLY::xuat(){
    cout<<"Ma quan ly: "<<MAQL<<endl;
    cout<<"Ten quan ly: "<<HOTEN<<endl;
}
class MAY
{
    char MAMAY[10];
    char KIEUMAY[20];
    char TINHTRANG[30];
public:
    void nhap();
    void xuat();
};
void MAY::nhap(){
    cout<<"Nhap ma may: ";fflush(stdin);gets(MAMAY);
    cout<<"Nhap kieu may: ";fflush(stdin);gets(KIEUMAY);
    cout<<"Nhap tinh trang may: ";fflush(stdin);gets(TINHTRANG);
}
void MAY::xuat(){
   cout<<setw(15)<<MAMAY<<setw(20)<<KIEUMAY<<setw(20)<<TINHTRANG<<endl;
}
class PHONGMAY
{
    char MAPHONG[10];
    char TENPHONG[30];
    float DIENTICH;
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
};
void PHONGMAY::nhap(){
    cout<<"Nhap ma phong: ";fflush(stdin);gets(MAPHONG);
    cout<<"Nhap ten phong: ",fflush(stdin);gets(TENPHONG);
    cout<<"Nhap dien tich: ";cin>>DIENTICH;

    x.nhap();

    cout<<"Nhap n: ";
    cin>>n;
    y = new MAY[n];

    for(int i = 0; i < n; i++)
        y[i].nhap();
}
void PHONGMAY::xuat(){
    cout<<setw(50)<<"----------XUAT THONG TIN PHONG MAY----------"<<endl;
    cout<<"Ma phong: "<<MAPHONG<<endl;
    cout<<"Ten phong: "<<TENPHONG<<endl;
    cout<<"Dien tich: "<<DIENTICH<<endl;
    x.xuat();

    cout<<setw(15)<<"Ma may"<<setw(20)<<"Kieu may"<<setw(20)<<"Tinh trang"<<endl;
    for(int i = 0; i < n; i++)
        y[i].xuat();
}
int main(){
    PHONGMAY a;
    a.nhap();
    a.xuat();
    return 0;
}