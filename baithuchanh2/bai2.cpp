#include<bits\stdc++.h>

using namespace std;
class NSX
{
    char MANSX[15];
    char TENNSX[30];
    char DCNSX[30];
public:
    void nhap();
    void xuat();
};
void NSX::nhap(){
    cout<<"Nhap ma nha san xuat: ";fflush(stdin);gets(MANSX);
    cout<<"Nhap ten nha san xuat: ";fflush(stdin);gets(TENNSX);
    cout<<"Nhap dia chi nha san xuat: ";fflush(stdin);gets(DCNSX);
}
void NSX::xuat(){
    cout<<"Ma nha san xuat: "<<MANSX<<endl;
    cout<<"Ten nha san xuat: "<<TENNSX<<endl;
    cout<<"Dia chi nha san xuat: "<<DCNSX<<endl;
}
class HANG
{
    char MAH[10];
    char TENH[30];
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout<<"Nhap ma hang: ";fflush(stdin);gets(MAH);
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENH);
    x.nhap();
}
void HANG::xuat(){
    cout<<setw(50)<<"---------XUAT THONG TIN HANG----------"<<endl;
    cout<<"Ma hang: "<<MAH<<endl;
    cout<<"Ten hang: "<<TENH<<endl;
    x.xuat();
}
int main(){
    HANG a;
    a.nhap();
    a.xuat();
    return 0;
}