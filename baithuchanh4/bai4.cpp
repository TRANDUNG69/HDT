#include<bits\stdc++.h>
using namespace std;

class ELECTRONIC
{
protected:
    float CONGSUAT;
    int DIENAP;
public:
    ELECTRONIC(float a, int b);
};
ELECTRONIC::ELECTRONIC(float a, int b){
    CONGSUAT = a;
    DIENAP = b;
}
class TULANH : public ELECTRONIC
{   
    int DUNGTICH;
    int SONGAN;
public:
    TULANH(float a, int b, int c, int d);
    void xuat();
};
TULANH::TULANH(float a, int b, int c, int d):ELECTRONIC(a,b){
    DUNGTICH = c;
    SONGAN = d;
}
void TULANH::xuat(){
    cout<<setw(20)<<"---------XUAT THONG TIN TU LANH---------"<<endl;
    cout<<"Dung tich: "<<DUNGTICH<<endl;
    cout<<"So ngan: "<<SONGAN<<endl;
    cout<<"Cong suat: "<<CONGSUAT<<endl;
    cout<<"Dien ap: "<<DIENAP<<endl;
}
class MAYGIAT : public ELECTRONIC
{
    int dungtich;
    int LOAI;
public:
    MAYGIAT(float a, int b, int e, int f);
    void xuat();
};
MAYGIAT::MAYGIAT(float a, int b, int e, int f):ELECTRONIC(a, b){
    dungtich = e;
    LOAI = f;
}
void MAYGIAT::xuat(){
    cout<<setw(20)<<"---------XUAT THONG TIN MAY GIAT---------"<<endl;
    cout<<"Dung tich: "<<dungtich<<endl;
    cout<<"Loai: "<<LOAI<<endl;
    cout<<"Cong suat: "<<CONGSUAT<<endl;
    cout<<"Dien ap: "<<DIENAP<<endl;
}
int main(){
    TULANH B(200, 2, 500, 220);
    MAYGIAT C(100, 1, 300, 220);
    B.xuat();
    C.xuat();

}