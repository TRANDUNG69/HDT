#include<bits\stdc++.h>
using namespace std;
class NHANVIEN
{
    char NVKK[30];
    char CHUCVU[20];
public:
    void nhap();
    void xuat();
};
void NHANVIEN::nhap(){
    cout<<"Nhap nhan vien kiem ke: ";fflush(stdin);gets(NVKK);
    cout<<"Nhap chuc vu: ";fflush(stdin);gets(CHUCVU);
}
void NHANVIEN::xuat(){
    cout<<"Nhan vien kiem ke: "<<NVKK<<setw(20)<<"Chuc vu: "<<CHUCVU<<endl;
}
class PHONG
{
    char KKTAIPHONG[30];
    char MAP[10];
    char TRUONGP[30];
public:
    void nhap();
    void xuat();
};
void PHONG::nhap(){
    cout<<"Nhap kiem ke tai phong: ";fflush(stdin);gets(KKTAIPHONG);
    cout<<"Nhap ma phong: ";fflush(stdin);gets(MAP);
    cout<<"Nhap ten truong phong: ";fflush(stdin);gets(TRUONGP);
}
void PHONG::xuat(){
    cout<<"Kiem ke tai phong: "<<KKTAIPHONG<<setw(20)<<"Ma phong: "<<MAP<<endl;
    cout<<"Truong phong: "<<TRUONGP<<endl;
}
class TAISAN
{
    char TENTS[30];
    int SL;
    char TINHTRANG[20];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void TAISAN::nhap(){
    cout<<"Nhap ten tai san: ";fflush(stdin);gets(TENTS);
    cout<<"Nhap so luong: ";cin>>SL;
    cout<<"Nhap tinh trang: ";fflush(stdin);gets(TINHTRANG);
}
void TAISAN::xuat()
{
    cout<<setw(15)<<TENTS<<setw(30)<<SL<<setw(20)<<TINHTRANG<<endl;
}
class PHIEU
{
    char MAPHIEU[10];
    char NGAYLAP[10];
    NHANVIEN x;
    PHONG y;
    TAISAN *z;
    int n;
public:
    void nhap();
    void xuat();
    friend void SORT(PHIEU P);
};
void PHIEU::nhap(){
    cout<<"Nhap ma phieu: ";fflush(stdin);gets(MAPHIEU);
    cout<<"Nhap ngay lap: ";fflush(stdin);gets(NGAYLAP);
    x.nhap();
    y.nhap();
    cout<<"Nhap n: ";
    cin>>n;
    z = new TAISAN[n];
    for(int i = 0; i < n; i++)  
        z[i].nhap();
}
void PHIEU::xuat()
{
    cout<<setw(40)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu: "<<MAPHIEU<<setw(20)<<"Ngay lap: "<<NGAYLAP<<endl;
    x.xuat();
    y.xuat();

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(z[i].SL > z[j].SL)
            {
                TAISAN tmp = z[i];
                z[i] = z[j];
                z[j] = tmp;
            }
        }
    }
    // sắp xếp tăng dần theo số lượng
    for(int i = 0; i < n; i++)
        if(stricmp(z[i].TENTS,"May vi tinh") == 0) {
            z[i].SL = 20;
        }
    
    //kiểm tra xem tên của tài sản có là Máy vi tính ko nếu đúng thì gán SL cho máy vi tính là 20

    cout<<setw(15)<<"Ten tai san"<<setw(30)<<"So luong"<<setw(20)<<"Tinh trang"<<endl;
    for(int i = 0; i < n; i++)
        z[i].xuat();
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += z[i].SL;
    cout<<"So tai san da kiem ke:"<<n<<setw(25)<<"Tong so luong: "<<sum<<endl;
}
int main()
{
    PHIEU P;
    P.nhap();
    P.xuat();
}