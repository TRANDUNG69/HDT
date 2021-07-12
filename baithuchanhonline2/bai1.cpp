#include<bits\stdc++.h>
using namespace std;
class NSX
{
    char TENNSX[20];
    char DIACHI[30];
public:
    void nhap();
    void xuat();
    friend class HANG;
};
void NSX::nhap(){
    cout<<"Nhap ten nha san xuat: ";fflush(stdin);gets(TENNSX);
    cout<<"Nhap dia chi: ";fflush(stdin);gets(DIACHI);
} 
void NSX::xuat(){
    cout<<"Ten nha san xuat: "<<TENNSX<<endl;
    cout<<"Dia chi: "<<TENNSX<<endl;
}
class HANG
{
protected:
    char TENH[20];
    NSX x;
    float DONGIA;
public:
    void nhap();
    void xuat();
    HANG();
};
HANG::HANG(){
    strcpy(TENH, "");
    strcpy(x.TENNSX, "");
    strcpy(x.DIACHI, "");
    DONGIA = 0;
}
void HANG::nhap(){
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENH);
    x.nhap();
    cout<<"Nhap don gia: ";cin>>DONGIA;
}
void HANG::xuat(){
    cout<<"Ten hang: "<<TENH<<endl;
    x.xuat();
    cout<<"Don gia: "<<DONGIA<<endl;
}
class DATE
{
    int D;
    int M;
    int Y;
public:     
    void nhap();
    void xuat();
    friend class TIVI;
};

void DATE::nhap(){
    cout<<"Nhap ngay: ";cin>>D;
    cout<<"Nhap thang: ";cin>>M;
    cout<<"Nhap nam: ";cin>>Y;
}
void DATE::xuat(){
    cout<<"Ngay: "<<D<<"-"<<M<<"-"<<Y<<endl;
}

class TIVI : public HANG
{
    char KICHTHUOC[15];
    DATE NGAYNHAP;
public:
    void nhap();
    void xuat();
    TIVI();
};
TIVI::TIVI(){
    strcpy(KICHTHUOC, "");
    NGAYNHAP.D = 0;
    NGAYNHAP.M = 0;
    NGAYNHAP.Y = 0;
}
void TIVI::nhap(){
    cout<<"Nhap kich thuoc: ";fflush(stdin);gets(KICHTHUOC);
    NGAYNHAP.nhap();
    HANG::nhap();
}
void TIVI::xuat(){
    cout<<setw(50)<<"----------XUAT THONG TIN TI VI----------"<<endl;
    cout<<"Kich thuoc: "<<KICHTHUOC<<endl;
    NGAYNHAP.xuat();
    HANG::xuat();
}
int main(){
    TIVI a;
    a.nhap();
    a.xuat();
}
