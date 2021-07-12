#include<bits\stdc++.h>
using namespace std;
class PRINTER
{
protected:
    float TRONGLUONG;
    char HANGSX[20];
    int NAMSX;
    char TOCDO[10];
public:
    friend void Sua(PRINTER &x);
};
class LASERPRINTER : public PRINTER
{
    char DOPHANGIAI[10];
public:
    void nhap();
    void xuat();
};
void LASERPRINTER::nhap(){
    cout<<"Nhap do phan giai: ";fflush(stdin);gets(DOPHANGIAI);
    cout<<"Nhap trong luong: ";cin>>TRONGLUONG;
    cout<<"Nhap hang san xuat: ";fflush(stdin);gets(HANGSX);
    cout<<"Nhap nam san xuat: ";cin>>NAMSX;
    cout<<"Nhap toc do: ";fflush(stdin);gets(TOCDO);
}
void LASERPRINTER::xuat(){
    cout<<setw(30)<<"----------XUAT THONG TIN MAY IN----------"<<endl;
    cout<<"Do phan giai: "<<DOPHANGIAI<<endl;
    cout<<"Trong luong: "<<TRONGLUONG<<endl;
    cout<<"Hang san xuat: "<<HANGSX<<endl;
    cout<<"Nam san xuat: "<<NAMSX<<endl;
    cout<<"Toc do: "<<TOCDO<<endl;
}
class DOTPRINTER : public PRINTER
{
    char MATDOKIM[10];
public:
    void nhap();
    void xuat();
};
void DOTPRINTER::nhap(){
    cout<<"Nhap mat do kim: ";fflush(stdin);gets(MATDOKIM);
    cout<<"Nhap trong luong: ";cin>>TRONGLUONG;
    cout<<"Nhap hang san xuat: ";fflush(stdin);gets(HANGSX);
    cout<<"Nhap nam san xuat: ";cin>>NAMSX;
    cout<<"Nhap toc do: ";fflush(stdin);gets(TOCDO);
}
void DOTPRINTER::xuat(){
    cout<<setw(20)<<"---------XUAT THONG TIN MAY IN---------"<<endl;
    cout<<"Mat do kim: "<<MATDOKIM<<endl;
    cout<<"Trong luong: "<<TRONGLUONG<<endl;
    cout<<"Hang san xuat: "<<HANGSX<<endl;
    cout<<"Nam san xuat: "<<NAMSX<<endl;
    cout<<"Toc do: "<<TOCDO<<endl;
}
void Sua(PRINTER &x){
    x.NAMSX=2020;
}
int main(){
    LASERPRINTER a;
    a.nhap();
    Sua(a);
    a.xuat();
    DOTPRINTER b;
    b.nhap();
    Sua(b);
    b.xuat();
    return 0;
}