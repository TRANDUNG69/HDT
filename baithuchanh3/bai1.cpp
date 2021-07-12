#include<bits\stdc++.h>

using namespace std;

class SINHVIEN
{
    char MASV[10];
    char HOTEN[30];
    float DIEMTOAN;
    float DIEMLY;
    float DIEMHOA;
public:
    void nhap();
    void xuat();
    friend void Sort(SINHVIEN *a, int n);
};
void SINHVIEN::nhap(){
    cout<<"Nhap ma sinh vien: ";fflush(stdin);gets(MASV);
    cout<<"Nhap ten sinh vien: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap diem toan: ";cin>>DIEMTOAN;
    cout<<"Nhap diem ly: ";cin>>DIEMLY;
    cout<<"Nhap diem hoa: ";cin>>DIEMHOA;
}
void SINHVIEN::xuat(){
    cout<<setw(15)<<MASV<<setw(25)<<HOTEN<<setw(15)<<DIEMTOAN<<setw(15)<<DIEMLY<<setw(15)<<DIEMHOA<<DIEMTOAN+DIEMLY+DIEMHOA<<endl;
}

void Sort(SINHVIEN *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].DIEMTOAN+a[i].DIEMLY+a[i].DIEMHOA > a[j].DIEMTOAN+a[j].DIEMLY+a[j].DIEMHOA){
                SINHVIEN tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
       
}
int main(){
    int n;
    SINHVIEN *a;
    cout<<"Nhap n: ";
    cin>>n;

    a = new SINHVIEN[n];

    for(int i = 0; i < n; i++)
        a[i].nhap();

    cout<<setw(15)<<"Ma sinh vien"<<setw(25)<<"Ho ten"<<setw(15)<<"Diem toan"<<setw(15)<<"Diem ly"<<setw(15)<<"Diem toan"<<"Tong diem"<<endl; 
     
    Sort(a, n);
    for(int i = 0; i < n; i++)
        a[i].xuat();

    return 0;
}