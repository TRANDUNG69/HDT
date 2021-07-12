#include<bits\stdc++.h>
using namespace std;

class SACH
{
    char MAS[10];
    char TENS[30];
    char NXB[20];
    int SOTRANG;
    float GIATIEN;
public:
    void nhap();
    void xuat();
};
void SACH::nhap(){
    cout<<"Nhap ma sach: ";fflush(stdin);gets(MAS);
    cout<<"Nhap ten sach: ";fflush(stdin);gets(TENS);
    cout<<"Nhap nha xuat ban sach: ";fflush(stdin);gets(NXB);
    cout<<"Nhap so trang: ";cin>>SOTRANG;
    cout<<"Nhap gia tien: ";cin>>GIATIEN;
}
void SACH::xuat(){
    cout<<setw(15)<<MAS<<setw(25)<<TENS<<setw(25)<<NXB<<setw(15)<<SOTRANG<<setw(15)<<GIATIEN<<endl;
}
int main(){
    SACH *a;
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    a = new SACH[n];

    for(int i = 0; i < n; i++)
        a[i].nhap();

    cout<<setw(60)<<"------------------XUAT THONG TIN SACH----------------"<<endl;
    cout<<setw(15)<<"Ma sach"<<setw(25)<<"Ten sach"<<setw(25)<<"Ten nha xuat ban"<<setw(15)<<"So trang"<<setw(15)<<"Gia tien"<<endl;

    for(int i = 0; i < n; i++)
        a[i].xuat();
}