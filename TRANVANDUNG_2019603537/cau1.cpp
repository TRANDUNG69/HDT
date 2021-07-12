#include<bits\stdc++.h>
using namespace std;
class DONVI
{
    char MADV[10];
    char TENDV[30];
    char DIACHIDV[30];
    char TRUONGDV[30];
public:
    void nhap();
    void xuat();
};
void DONVI::nhap(){
    cout<<"Nhap ma don vi: ";fflush(stdin);gets(MADV);
    cout<<"Nhap ten don vi: ";fflush(stdin);gets(TENDV);
    cout<<"Nhap dia chi don vi: ";fflush(stdin);gets(DIACHIDV);
    cout<<"Nhap truong don vi: ";fflush(stdin);gets(TRUONGDV);
}
void DONVI::xuat(){
    cout<<"Ma don vi: "<<MADV<<setw(30)<<"Ten doon vi: "<<TENDV<<endl;
    cout<<"Dia chi don vi: "<<DIACHIDV<<setw(35)<<"Truong don vi: "<<TRUONGDV<<endl;
}
class TAISAN
{
    char MATS[10];
    char TENTS[20];
    char DONVITINH[30];
    int GIATRI;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void TAISAN::nhap(){
    cout<<"Nhap ma tai san: ";fflush(stdin);gets(MATS);
    cout<<"Nhap ten tai san: ";fflush(stdin);gets(TENTS);
    cout<<"Nhap don vi tinh: ";fflush(stdin);gets(DONVITINH);
    cout<<"Nhap gia tri: ";cin>>GIATRI;

}
void TAISAN::xuat(){
    
    cout<<left<<setw(20)<<MATS<<setw(30)<<TENTS<<setw(20)<<DONVITINH<<setw(20)<<GIATRI<<endl;
}
class PHIEU
{
    char NGAYLAP[15];
    char NGUOILAP[30];
    DONVI x;
    TAISAN *y;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap(){
    cout<<"Nhap ngay lap: ";fflush(stdin);gets(NGAYLAP);
    cout<<"Nhap nguoi lap: ";fflush(stdin);gets(NGUOILAP);
    x.nhap();
    cout<<"Nhap n: ";
    cin>>n;
    y = new TAISAN[n];
    for(int i = 0; i < n; i++)
        y[i].nhap();
}
void PHIEU::xuat(){
    cout<<"Ngay lap: "<<NGAYLAP<<setw(35)<<"Nguoi lap: "<<NGUOILAP<<endl;
    x.xuat();
    cout << "TONG CONG TY ABC"<<endl;
    cout <<right<< setw(50) << "BANG THONG KE TAI SAN"<<endl;
    cout << "Chi tiet: " << endl;
    cout << left << setw(20) << "MATS" << setw(30) << "TENTS" << setw(20) << "DONVITINH" << setw(20) << "GIATRI" << endl;
    for(int i = 0; i < n; i++)
        y[i].xuat();
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += y[i].GIATRI;
    }
    cout<<left<<setw(70)<<"Tong so luong thiet bi: "<<sum<<endl;
    cout<<setw(30)<<"Giam doc: "<<setw(30)<<"Phong quan li: "<<setw(30)<<"Nguoi lap: "<<endl;
}
int main(){
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}
