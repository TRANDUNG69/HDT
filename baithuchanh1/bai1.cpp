#include<bits\stdc++.h>
using namespace std;

class SINHVIEN
{
    char MASV[10];
    char HOTEN[30];
    int TUOI;
    float DIEM;
public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap()
{
    cout<<"Nhap ma sinh vien: ";fflush(stdin);gets(MASV);
    cout<<"Nhap ho ten sinh vien: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap tuoi sinh vien: ";cin>>TUOI;
    cout<<"Nhap diem sinh vien: ";cin>>DIEM;
}
void SINHVIEN::xuat()
{
    cout<<setw(30)<<"XUAT THONG TIN SINH VIEN"<<endl;
    cout<<"Ma sinh vien: "<<MASV<<endl;
    cout<<"Ho ten sinh vien: "<<HOTEN<<endl;
    cout<<"Tuoi sinh vien: "<<TUOI<<endl;
    cout<<"Diem sinh vien: "<<DIEM<<endl;
}
int main()
{
    SINHVIEN a, b;
    a.nhap();
    b.nhap();
    a.xuat();
    b.xuat();
    return 0;
}