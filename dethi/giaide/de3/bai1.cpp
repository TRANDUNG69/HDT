#include <bits\stdc++.h>
using namespace std;
class NHA
{
protected:
    int DIENTICH, NAMXD;
    double KINHPHIXD;
};
class NHACAOTANG : public NHA
{
    int SOTANG, SOPHONG;

public:
    void nhap();
    void xuat();
    friend void sort_Increase(NHACAOTANG *a, int n);
    friend void sort_Decrease(NHACAOTANG *a, int n);
    friend void In(NHACAOTANG *a, int n);
};
void NHACAOTANG::nhap()
{
    cout << "Nhap dien tich: ";
    cin >> DIENTICH;
    cout << "Nhap nam xay dung: ";
    cin >> NAMXD;
    cout << "Nhap kinh phi xay dung: ";
    cin >> KINHPHIXD;
    cout << "Nhap so tang: ";
    cin >> SOTANG;
    cout << "Nhap so phong: ";
    cin >> SOPHONG;
}
void NHACAOTANG::xuat()
{
    cout << left << setw(15) << DIENTICH << setw(15) << NAMXD << setw(15) << KINHPHIXD << setw(15) << SOTANG << setw(15) << SOPHONG << endl;
}
void NHAP(NHACAOTANG *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin nha cao tang thu: " << i + 1 << endl;
        a[i].nhap();
    }
}
void XUAT(NHACAOTANG *a, int n)
{
    for (int i = 0; i < n; i++)
        a[i].xuat();
}
void sort_Increase(NHACAOTANG *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].DIENTICH > a[j].DIENTICH){
                NHACAOTANG tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void sort_Decrease(NHACAOTANG *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].DIENTICH < a[j].DIENTICH){
                NHACAOTANG tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void In(NHACAOTANG *a, int n){
    for(int i = 0; i < n; i++){
        if(a[i].SOPHONG > 5){
            a[i].xuat();
        }
        else{
            cout<<"Khong co"<<endl;
            break;
        }
    }
}
void title(){
    cout << left << setw(15) << "DIENTICH" << setw(15) << "NAMXD" << setw(15) << "KINHPHIXD" << setw(15) << "SOTANG" << setw(15) << "SOPHONG" << endl;
}
int main()
{
    NHACAOTANG *a;
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n >= 20 || n <= 0)
            cout << "Nhap lai n: ";
    } while (n <= 0 || n >= 20);
    a = new NHACAOTANG[n];
    NHAP(a, n);
    sort_Increase(a, n);
    title();
    XUAT(a, n);
    sort_Decrease(a, n);
    title();
    XUAT(a, n);
    title();
    In(a, n);
    return 0;
}