#include<bits\stdc++.h>

using namespace std;

class NSX
{
    char MANSX[10];
    char TENNSX[30];
    char DCNSX[30];
public:
    friend class HANG;
};

class HANG
{
    char MAHANG[10];
    char TENHANG[20];
    float DONGIA;
    float TRONGLUONG;
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap(){
    cout<<"Nhap ma hang: ";fflush(stdin);gets(MAHANG);
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENHANG);
    cout<<"Nhap don gia: ";cin>>DONGIA;
    cout<<"Nhap trong luong: ";cin>>TRONGLUONG;

    cout<<"Nhap ma nha san xuat: ";fflush(stdin);gets(x.MANSX);
    cout<<"Nhap ten nha san xuat: ";fflush(stdin);gets(x.TENNSX);
    cout<<"Nhap dia chi nha san xuat: ";fflush(stdin);gets(x.DCNSX);
}
void HANG::xuat(){
    cout<<setw(40)<<"---------------XUAT THONG TIN HANG---------------"<<endl;
    cout<<"Ma hang: "<<MAHANG<<endl;
    cout<<"Ten hang: "<<TENHANG<<endl;
    cout<<"Don gia: "<<DONGIA<<endl;
    cout<<"Trong luong: "<<TRONGLUONG<<endl;
    cout<<"Ma nha san xuat: "<<x.MANSX<<endl;
    cout<<"Ten nha san xuat: "<<x.TENNSX<<endl;
    cout<<"Dia chi nha san xuat: "<<x.DCNSX<<endl;
}
int main(){
    HANG a;
    a.nhap();
    a.xuat();
    return 0;
}
// VD: a là bạn của b thì a có thể lấy dữ liệu của b một cách tự do cho dù dữ liệu của b ở chế độ private(Đây gọi là lớp bạn);
// VD: Viết hàm riêng ra bên ngoài muốn sử dụng hàm đó thì hàm đó phải là bạn của hàm chúng ta cần dùng đến nó(Hàm bạn).


