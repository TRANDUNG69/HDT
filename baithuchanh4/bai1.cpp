#include<bits\stdc++.h>

using namespace std;
class PERSON
{
protected:
    char HOTEN[20];
    char NGAYSINH[10];
    char QUEQUAN[30];
};
class KYSU : public PERSON
{
    char NGANH[20];
    int NAMTN;
public:
    void nhap();
    void xuat();
    friend int main();
};
void KYSU::nhap(){
    cout<<"Nhap nganh: ";fflush(stdin);gets(NGANH);
    cout<<"Nhap nam tot nghiep: ";cin>>NAMTN;
    cout<<"Nhap ho ten: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap ngay sinh: ";fflush(stdin);gets(NGAYSINH);
    cout<<"Nhap que quan: ";fflush(stdin);gets(QUEQUAN);
}
void KYSU::xuat(){
    cout<<left<<setw(10)<<HOTEN<<setw(25)<<NGAYSINH<<setw(15)<<QUEQUAN<<setw(15)<<NGANH<<setw(15)<<NAMTN<<endl;
}
int main(){
    KYSU *a;
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    a = new KYSU[n];

    for(int i = 0; i < n; i++)
        a[i].nhap();

    cout<<setw(40)<<"XUAT THONG TIN"<<endl;

    cout<<left<<setw(10)<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(15)<<"Que quan"<<setw(15)<<"Nganh"<<setw(15)<<"Nam tot nghiep"<<endl;

    for(int i = 0; i < n; i++)
        a[i].xuat();

    cout<<setw(20)<<"XUAT THONG TIN KY SU TOT NGHIEP NAM GAN DAY NHAT"<<endl;

    cout<<left<<setw(10)<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(15)<<"Que quan"<<setw(15)<<"Nganh"<<setw(15)<<"Nam tot nghiep"<<endl;

    int MAX = a[0].NAMTN;

    for(int i = 0; i < n; i++)
        if(a[i].NAMTN > MAX)
            MAX == a[i].NAMTN;

    for(int i = 0; i < n; i++)
        if(MAX == a[i].NAMTN)
            a[i].xuat();
    return 0;
}