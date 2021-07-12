#include<bits\stdc++.h>
using namespace std;

class DATE
{
    int D;
    int M;
    int Y;
public:
    void nhap();
    void xuat();
};
void DATE::nhap(){
    cout<<"Nhap ngay: ";cin>>D;
    cout<<"Nhap thang: ";cin>>M;
    cout<<"Nhap nam: ";cin>>Y;
}
void DATE::xuat(){
    cout<<"Date: "<<D<<"-"<<M<<"-"<<Y<<endl;
}

class NHANSU
{
    char MANS[10];
    char HOTEN[30];
    DATE NS;
public:
    void nhap();
    void xuat();
};

void NHANSU::nhap(){
    cout<<"Nhap ma nhan su: ";fflush(stdin);gets(MANS);
    cout<<"Nhap ho ten: ";fflush(stdin);gets(HOTEN);
    NS.nhap();
}
void NHANSU::xuat(){
    cout<<setw(40)<<"-----XUAT THONG TIN NHAN SU-----"<<endl;
    cout<<"Ma nhan su: "<<MANS<<endl;
    cout<<"Ho ten nhan su: "<<HOTEN<<endl;
    NS.xuat();
}
int main(){
    NHANSU x;
    x.nhap();
    x.xuat();
    return 0;
}