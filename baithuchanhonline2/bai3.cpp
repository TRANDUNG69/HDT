#include<bits\stdc++.h>
using namespace std;
class TRUONG
{
protected:
    char MATRUONG[10];
    char TENTRUONG[20];
    char DIACHI[30];
public:
    void nhap();
    void xuat();
};
void TRUONG::nhap(){
    cout<<"Nhap ma truong: ";fflush(stdin);gets(MATRUONG);
    cout<<"Nhap ten truong: ";fflush(stdin);gets(TENTRUONG);
    cout<<"Nhap dia chi truong: ";fflush(stdin);gets(DIACHI);
}
void TRUONG::xuat(){
    cout<<"Ma truong: "<<MATRUONG<<endl;
    cout<<"Ten truong: "<<TENTRUONG<<endl;
    cout<<"Dia chi truong: "<<DIACHI<<endl;
}
class KHOA
{
    char MAKHOA[10];
    char TENKHOA[20];
    char TRUONGKHOA[20];
public:
    friend class TRUONGDH;
};
class BAN
{
    char MABAN[10];
    char TENBAN[20];
    char NGAYTHANHLAP[10];
public:
    friend class TRUONGDH;
};
class TRUONGDH : public TRUONG
{
    KHOA *x;
    int n;
    BAN *y;
    int m;
public:
    void nhap();
    void xuat();
    friend class KHOA;
    friend class BAN;
};
void TRUONGDH::nhap(){
    TRUONG::nhap();
    cout<<"Nhap n: ";cin>>n;
    x = new KHOA[n];
    for(int i = 0; i < n; i++){
        cout<<"Nhap ma khoa: ";fflush(stdin);gets(x[i].MAKHOA);
        cout<<"Nhap ten khoa: ";fflush(stdin);gets(x[i].TENKHOA);
        cout<<"Nhap ten truong khoa: ";fflush(stdin);gets(x[i].TRUONGKHOA);
    }
    cout<<"Nhap m: ";cin>>m;
    y = new BAN[m];
    for(int i = 0; i < m; i++){
        cout<<"Nhap ma ban: ";fflush(stdin);gets(y[i].MABAN);
        cout<<"Nhap ten ban: ";fflush(stdin);gets(y[i].TENBAN);
        cout<<"Nhap ngay thanh lap: ";fflush(stdin);gets(y[i].NGAYTHANHLAP);
    }  
}
void TRUONGDH::xuat(){
    TRUONG::xuat();
    cout << setw(20) <<"Ten khoa"<< setw(20) <<"Ma khoa"<< setw(20) <<"Truong khoa"<< endl;
    for(int i = 0; i < n; i++){
        cout<<setw(20)<<x[i].MAKHOA<<setw(20)<<x[i].TENKHOA<<setw(20)<<x[i].TRUONGKHOA<<endl;
    }
    cout << setw(20) <<"Ma ban"<< setw(20) <<"Ten ban"<< setw(20) <<"Ngay thanh lap"<< endl;
    for(int i = 0; i < m; i++){
        cout << setw(20) << y[i].MABAN << setw(20) << y[i].TENBAN << setw(20) << y[i].NGAYTHANHLAP << endl;
    }
}
int main(){
    TRUONGDH a;
    a.nhap();
    a.xuat();
    return 0;
}