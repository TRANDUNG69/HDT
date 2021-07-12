#include<bits\stdc++.h>
using namespace std;

class SINHVIEN
{
    char MASV[10];
    char HOTEN[30];
    char LOP[10];
    char KHOA[10];
public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap(){
    cout<<"Nhap ma sinh vien: ";fflush(stdin);gets(MASV);
    cout<<"Nhap ho ten sinh vien: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap ten lop: ";fflush(stdin);gets(LOP);
    cout<<"Nhap ten khoa: ";fflush(stdin);gets(KHOA);
}
void SINHVIEN::xuat(){
    cout<<"Ma sinh vien: "<<MASV<<setw(20)<<"Ten sinh vien: "<<HOTEN<<endl;
    cout<<"Lop: "<<LOP<<setw(25)<<"Khoa: "<<KHOA<<endl;
}
class BANGDIEM
{
    char TENMON[20];
    int SOTRINH;
    int DIEM;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void BANGDIEM::nhap(){
    cout<<"Nhap ten mon: ";fflush(stdin);gets(TENMON);
    cout<<"Nhap so trinh: ";cin>>SOTRINH;
    cout<<"Nhap diem: ";cin>>DIEM;
}
void BANGDIEM::xuat(){
    cout<<setw(10)<<TENMON<<setw(25)<<SOTRINH<<setw(15)<<DIEM<<endl;
}
class PHIEU
{
    SINHVIEN a;
    BANGDIEM *b;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap(){
    a.nhap();

    cout<<"Nhap n: ";
    cin>>n;
    b = new BANGDIEM[n];

    for(int i = 0; i < n; i++)
        b[i].nhap();
}
void PHIEU::xuat(){
    a.xuat();
    cout<<setw(10)<<"Ten mon"<<setw(25)<<"So trinh"<<setw(15)<<"Diem"<<endl;
    for(int i = 0; i < n; i++)
        b[i].xuat();
    int sotrinh = 0;
    int sotrinhdiem = 0;
    for(int i = 0; i < n; i++){
        sotrinhdiem += b[i].SOTRINH*b[i].DIEM;
        sotrinh += b[i].SOTRINH;
    }
    cout<<right<<setw(40)<<"Diem trung binh: "<<(float)sotrinhdiem/sotrinh<<endl;

    cout<<"So trinh lon hon 3 la: "<<endl;
    cout<<setw(10)<<"Ten mon"<<setw(25)<<"So trinh"<<setw(15)<<"Diem"<<endl;
    for(int i = 0; i < n; i++)
        if(b[i].SOTRINH > 3)
            b[i].xuat();
}
// void Chen(PHIEU c, int vt, BANGDIEM d)
// {
//     for(int i = n -1; i > vt, i--)
//         b[i] = b[i-1];
//     b[vt] = d;
//     n++; 
// }
int main(){
    PHIEU c;
    c.nhap();
    c.xuat();
    return 0;
}