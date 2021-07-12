#include<bits\stdc++.h>

using namespace std;

class VEHICLE
{
protected:
    char NHANHIEU[20];
    int NAMSX;
    char HANG[20];
public:
    void nhap();
    void xuat();
};
void VEHICLE::nhap(){
    cout<<"Nhap nhan hieu: ";fflush(stdin);gets(NHANHIEU);
    cout<<"Nhap nam san xuat: ";cin>>NAMSX;
    cout<<"Nhap hang: ";fflush(stdin);gets(HANG);
}
void VEHICLE::xuat(){
    cout<<"Nhan hieu: "<<NHANHIEU<<endl;
    cout<<"Nam san xuat: "<<NAMSX<<endl;
    cout<<"Hang: "<<HANG<<endl;
}
class MOTO : public VEHICLE
{
    int PHANKHOI;
public: 
    void nhap();
    void xuat();
};
void MOTO:: nhap(){
    cout<<"Nhap phan khoi: "; cin>>PHANKHOI;
    VEHICLE::nhap();
}
void MOTO::xuat(){
    cout<<"Phan khoi: "<<PHANKHOI<<endl;
    VEHICLE::xuat();
}
class OTO : public VEHICLE
{
    int SOCHONGOI;
    float DUNGTICH;
public:
    void nhap();
    void xuat();
    friend void Thaydoi(OTO &b);
};
void OTO::nhap(){
    cout<<"Nhap so cho ngoi: ";cin>>SOCHONGOI;
    cout<<"Nhap dung tich: ";cin>>DUNGTICH;
    VEHICLE::nhap();
}
void OTO::xuat(){
    cout<<"So cho ngoi: "<<SOCHONGOI<<endl;
    cout<<"Dung tich: "<<DUNGTICH<<endl;
    VEHICLE::xuat();
}
void Thaydoi(OTO &b){
    b.DUNGTICH = 3.0;
} 
int main(){
    MOTO a;
    a.nhap();
    a.xuat();
    
    OTO b;
    b.nhap();
    Thaydoi(b);
    b.xuat();
    return 0;
}
