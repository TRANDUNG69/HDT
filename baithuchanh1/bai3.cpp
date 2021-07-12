#include<bits\stdc++.h>
using namespace std;

class HANG
{
    char MAH[10];
    char TENH[30];
    float DONGIA;
    int SOLUONG;
public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout<<"Nhap ma hang: ";fflush(stdin);gets(MAH);
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENH);
    cout<<"Nhap don gia: ";cin>>DONGIA;
    cout<<"Nhap so luong: ";cin>>SOLUONG;
}
void HANG::xuat(){
   
    cout<<setw(15)<<MAH<<setw(25)<<TENH<<setw(15)<<DONGIA<<setw(15)<<SOLUONG<<setw(15)<<DONGIA*SOLUONG<<endl;
}
int main()
{
    int n;
    HANG *a;
    cout<<"Nhap n: ";
    cin>>n;
    a = new HANG[n];
    //cap phat bo nho
    for(int i = 0; i < n; i++)
        a[i].nhap();
    cout<<setw(50)<<"----------XUAT THONG TIN CAC MAT HANG----------"<<endl;
    cout<<setw(15)<<"Ma hang"<<setw(25)<<"Ten hang"<<setw(15)<<"Dong gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;

    for(int i = 0; i < n; i++)
        a[i].xuat();
}