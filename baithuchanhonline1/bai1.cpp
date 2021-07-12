#include<bits\stdc++.h>
using namespace std;
class NCC
{
    char MANCC[10];
    char TENNCC[30];
    char DCNCC[30];
public: 
    void nhap();
    void xuat();
};
void NCC::nhap(){
    cout<<"Nhap ma nha cung cap: ";fflush(stdin);gets(MANCC);
    cout<<"Nhap ten nha cung cap: ";fflush(stdin);gets(TENNCC);
    cout<<"Nhap dia chi nha cung cap: ";fflush(stdin);gets(DCNCC);
}
void NCC::xuat(){
    cout<<"Ma NCC: "<<MANCC<<setw(27)<<"Ten NCC: "<<TENNCC<<endl;
    cout<<"Dia chi: "<<DCNCC<<endl;
}
class HANG
{
    char TENH[30];
    float DONGIA;
    int SOLUONG;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void HANG::nhap(){
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENH);
    cout<<"Nhap don gia: ";cin>>DONGIA;
    cout<<"Nhap so luong: ";cin>>SOLUONG;
}
void HANG::xuat(){
    cout<<setw(20)<<TENH<<setw(15)<<DONGIA<<setw(15)<<SOLUONG<<setw(15)<<DONGIA*SOLUONG<<endl;
}
class PHIEU
{
    char MAP[10];
    char NGAYLAP[10];
    NCC x;
    HANG *y;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap(){
    cout<<"Nhap ma phieu: ";fflush(stdin);gets(MAP);
    cout<<"Nhap ngay lap: ";fflush(stdin);gets(NGAYLAP);
    x.nhap();
    cout<<"Nhap n: ";
    cin>>n;
    y = new HANG[n];
    for(int i = 0; i < n; i++)
        y[i].nhap();
}
void PHIEU::xuat(){
    cout<<setw(30)<<"PHIEU NHAP HANG"<<endl;
    cout<<"Ma phieu: "<<MAP<<setw(30)<<"Ngay lap: "<<NGAYLAP<<endl;
    x.xuat();
    cout<<setw(20)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
    for(int i = 0; i < n; i++)
        y[i].xuat();
    float SUM = 0;
    for(int i = 0; i < n; i++)
        SUM += y[i].DONGIA*y[i].SOLUONG;
    cout<<right<<setw(50)<<"Cong thanh tien: "<<SUM<<endl;
}
int main(){
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}
