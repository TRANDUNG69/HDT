#include<bits\stdc++.h>
using namespace std;

class PERSON 
{
protected:
    char HOTEN[50];
    int NGAY, THANG, NAM;
    char QUEQUAN[100];
};
class VANDONGVIEN : public PERSON
{
protected:
    char BOMON[30];
    float THUNHAP;
};
class CAUTHU : public VANDONGVIEN
{
    char CLB[100];
    char VITRI[100];
public:
    void nhap();
    void xuat();
};
void CAUTHU::nhap(){
    cout<<"Nhap cau lac bo: ";fflush(stdin);gets(CLB);
    cout<<"Nhap vi tri: ";fflush(stdin);gets(VITRI);
    cout<<"Nhap bo mon: ";fflush(stdin);gets(BOMON);
    cout<<"Nhap thu nhap: ";cin>>THUNHAP;
    cout<<"Nhap ho ten: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap ngay: ";cin>>NGAY; 
    cout<<"Nhap thang: ";cin>>THANG; 
    cout<<"Nhap nam: ";cin>>NAM; 
    cout<<"Nhap que quan: ";fflush(stdin);gets(QUEQUAN);
}
void CAUTHU::xuat(){
    cout<<left<<setw(20)<<HOTEN<<setw(25)<<NGAY<<setw(15)<<THANG<<setw(15)<<NAM<<setw(20)<<BOMON<<setw(20)<<THUNHAP<<setw(15)<<CLB<<setw(15)<<VITRI<<endl;
}
int main(){
    CAUTHU *a;
    int n;
    cout<<"Nhap n: ";
    do{
        cin>>n;
        if(n >= 50 || n <= 0) cout<<"Nhap lai n: ";
    } while (n >= 50 || n <= 0);
    {
    a = new CAUTHU[n];
    for(int i = 0; i < n; i++)
        a[i].nhap();

    cout<<left<<setw(20)<<"Ho ten"<<setw(25)<<"Ngay"<<setw(15)<<"Thang"<<setw(15)<<"Nam"<<setw(20)<<"Bo mon"<< setw(20)<<"Thu nhap"<<setw(15)<<"Cau lac bo"<<setw(15)<<"Vi tri"<<endl;
    for(int i = 0; i < n; i++)
        a[i].xuat();
    }
    return 0;
}