#include<bits\stdc++.h>
using namespace std;
class NGUOI
{
protected:
    char HOTEN[20];
    int TUOI;
public:
    void nhap();
    void xuat();
    // friend class BENHVIEN;
    // friend class BENHNHAN;
};
void NGUOI::nhap(){
    cout<<"Nhap ho ten: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap tuoi: ";cin>>TUOI;
}
void NGUOI::xuat(){
    cout<<"Ho ten: "<<HOTEN<<endl;
    cout<<"Tuoi: "<<TUOI<<endl;
}
class BENHVIEN
{
    char TENBENHVIEN[20];
    char DIACHI[20];
    NGUOI GIAMDOC;
public:
    void nhap();
    void xuat();
};
void BENHVIEN::nhap(){
    cout<<"Nhap ten benh vien: "; fflush(stdin);gets(TENBENHVIEN);
    cout<<"Nhap dia chi: ";fflush(stdin);gets(DIACHI);
    GIAMDOC.nhap();
}
void BENHVIEN::xuat(){
    cout<<"Ten benh vien: "<<TENBENHVIEN<<endl;
    cout<<"Dia chi benh vien: "<<DIACHI<<endl;
    GIAMDOC.xuat();
}
class BENHNHAN : public NGUOI
{
   char MA[10];
   char TIENSU[20];
   char CHUANDOAN[30];
   BENHVIEN Benhvien;
public:
    void nhap();
    void xuat();
};
void BENHNHAN::nhap(){
    NGUOI::nhap();
    cout<<"Nhap ma: ";fflush(stdin);gets(MA);
    cout<<"Nhap tien su: ";fflush(stdin);gets(TIENSU);
    cout<<"Nhap chuan doan: ";fflush(stdin);gets(CHUANDOAN);
    Benhvien.nhap();
}
void BENHNHAN::xuat(){
    NGUOI::xuat();
    cout<<"Ma: "<<MA<<endl;
    cout<<"Tien su: "<<TIENSU<<endl;
    cout<<"Chuan doan: "<<CHUANDOAN<<endl;
    Benhvien.xuat();
}
int main(){
    BENHNHAN a;
    a.nhap();
    a.xuat();
}