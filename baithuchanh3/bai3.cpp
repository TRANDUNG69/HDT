#include<bits\stdc++.h>

using namespace std;
class DATE
{
    int D;
    int M;
    int Y;
public:
    friend class HANG;
    friend int main();
};
class HANG
{
    char MAHANG[10];
    char TENHANG[30];
    DATE NSX;
public:
    void nhap();
    void xuat();
    friend int main();
};
void HANG::nhap(){
    cout<<"Nhap ma hang: ";fflush(stdin);gets(MAHANG);
    cout<<"Nhap ten hang: ";fflush(stdin);gets(TENHANG);
    cout<<"Nhap ngay: ";cin>>NSX.D;
    cout<<"Nhap thang: ";cin>>NSX.M;
    cout<<"Nhap nam: ";cin>>NSX.Y;
}
void HANG::xuat(){
    cout<<setw(15)<<MAHANG<<setw(25)<<TENHANG<<setw(15)<<NSX.D<<setw(15)<<NSX.M<<setw(15)<<NSX.Y<<endl;
}

int main(){
    int n;
    HANG *a;
    cout<<"Nhap n: ";
    cin>>n;
    a = new HANG[n];
   for(int i = 0; i < n; i++)
        a[i].nhap();

    cout<<setw(50)<<"----------Xuat thong tin----------"<<endl;
    cout<<setw(15)<<"Ma hang"<<setw(25)<<"Ten hang"<<setw(15)<<"Ngay"<<setw(15)<<"Thang"<<setw(15)<<"Nam"<<endl;

    for(int i = 0; i < n; i++){
        if(a[i].NSX.Y == 2017){
                a[i].xuat();
        }
    }
    return 0;
}