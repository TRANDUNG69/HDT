#include<bits\stdc++.h>
using namespace std;
class NHANSU
{
protected:
    char HOTEN[50];
    int NGAY, THANG,NAM;
    char DIACHI[100];
};
class CONGCHUC : public NHANSU
{
private:
    char NGANHNGHE[20];
    int NAMVAOCQ;
    char TRINHDO[50];
    float HSLUONG;
    float PHCAP;
public:
    void nhap();
    void xuat();
    float thuNhap();
    friend void SearchMin(CONGCHUC *a, int n);
    friend void Sort(CONGCHUC *a, int n);
};
void CONGCHUC::nhap(){
    cout<<"Nhap ho ten: ";fflush(stdin);gets(HOTEN);
    cout<<"Nhap ngay sinh: ";cin>>NGAY;
    cout<<"Nhap thang sinh: ";cin>>THANG;
    cout<<"Nhap nam sinh: ";cin>>NAM;
    cout<<"Nhap dia chi: ";fflush(stdin);gets(DIACHI);
    cout<<"Nhap nganh nghe: ";fflush(stdin);gets(NGANHNGHE);
    cout<<"Nhap nam vao cong chuc: ";cin>>NAMVAOCQ;
    cout<<"Nhap trinh do: ";fflush(stdin);gets(TRINHDO);
    cout<<"Nhap he so luong: ";cin>>HSLUONG;
    cout<<"Nhap phu cap: ";cin>>PHCAP;
}
void CONGCHUC::xuat(){
    cout<<left<<setw(20)<<HOTEN<<setw(10)<<NGAY<<setw(10)<<THANG<<setw(10)<<NAM<<setw(15)<<DIACHI<<setw(15)<<NGANHNGHE<<setw(25)<<NAMVAOCQ<<setw(15)<<TRINHDO<<setw(15)<<HSLUONG<<setw(15)<<PHCAP<<endl;
}
float CONGCHUC::thuNhap(){
    return (this->HSLUONG * 830 + this->PHCAP);
}
void SearchMin(CONGCHUC *a, int n){
    float min = a[0].thuNhap();
    for(int i = 1; i < n; i++){
        if(a[i].thuNhap() < min)
            min = a[i].thuNhap();
    }
    for(int i = 0; i < n; i++){
        if(a[i].thuNhap() == min){
            a[i].xuat();
        }
    }
}
void NHAP(CONGCHUC *a, int n){
    for(int i = 0; i < n; i++){
        cout<<"Nhap cong chuc thu: "<<i + 1<<endl;
        a[i].nhap();
    }
}
void XUAT(CONGCHUC *a, int n){
    for(int i = 0; i < n; i++)
        a[i].xuat();
}
void Sort(CONGCHUC *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(stricmp((a[i].HOTEN),(a[j].HOTEN)) < 0){
                CONGCHUC tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main(){
    CONGCHUC *a;
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n >= 50 || n <= 0)
            cout << "Nhap lai n: ";
    } while (n >= 50 || n <= 0);
    a = new CONGCHUC[n];
    NHAP(a, n);
        
    cout << left << setw(20) << "Ho ten" << setw(10) << "Ngay" << setw(10) << "Thang" << setw(10) << "Nam" << setw(15) << "Dia chi" << setw(15) << "Nganh nghe" << setw(15) << "Nam vao cong chuc" << setw(15) << "Trinh do" << setw(15) << "He so luong" << setw(15) << "Phu cap" << endl;
    SearchMin(a, n);

    Sort(a, n);
    cout << left << setw(20) << "Ho ten" << setw(10) << "Ngay" << setw(10) << "Thang" << setw(10) << "Nam" << setw(15) << "Dia chi" << setw(15) << "Nganh nghe" << setw(15) << "Nam vao cong chuc" << setw(15) << "Trinh do" << setw(15) << "He so luong" << setw(15) << "Phu cap" << endl;
    cout << "Xuat tat ca thong tin" << endl;
    
    XUAT(a, n);
}