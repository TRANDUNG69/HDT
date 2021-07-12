#include<bits\stdc++.h>
using namespace std;
class PERSON
{
protected:
    char NAME[20];
    char BIRTH[10];
    char ADDRESS[30];
public:     
    void nhap();
    void xuat();
    PERSON();
};
PERSON::PERSON(){
    strcpy(NAME, "");
    strcpy(BIRTH, "");
    strcpy(ADDRESS, "");
}
void PERSON::nhap(){
    cout<<"Nhap ten: ";fflush(stdin);gets(NAME);
    cout<<"Nhap ngay sinh: ";fflush(stdin);gets(BIRTH);
    cout<<"Nhap dia chi: ";fflush(stdin);gets(ADDRESS);
}
void PERSON::xuat(){
    cout<<"Name: "<<NAME<<endl;
    cout<<"Birth: "<<BIRTH<<endl;
    cout<<"Address: "<<ADDRESS<<endl;
}
class SCHOOL
{
    char Name[30];
    char Date[10];
public:
    friend class FACULTY;
};
class FACULTY
{
    char NAMe[30];
    char DATe[10];
    SCHOOL x;
public:
    void nhap();
    void xuat();
};
void FACULTY::nhap(){
    cout<<"Nhap ten: ";fflush(stdin);gets(NAMe);
    cout<<"Nhap ngay: ";fflush(stdin);gets(DATe);
    cout<<"Nhap ten truong: ";fflush(stdin);gets(x.Name);
    cout<<"Nhap ngay: ";fflush(stdin);gets(x.Date);
}
void FACULTY::xuat(){
    cout<<"Ten: "<<NAMe<<endl;
    cout<<"Ngay: "<<DATe<<endl;
    cout<<"Ten truong: "<<x.Name<<endl;
    cout<<"Ngay: "<<x.Date<<endl;
}
class STUDENT : public  PERSON
{
    FACULTY y;
    char CLASS[10];
    int SCORE;
public:
    void nhap();
    void xuat();
    // STUDENT();
};
// STUDENT::STUDENT(){
//     strcpy(y.NAMe, "");
//     strcpy(y.DATe, "");
//     strcpy(CLASS, "");
//     SCORE = 0;
// }
void STUDENT::nhap(){
    y.nhap();
    cout<<"Nhap ten lop: ";fflush(stdin);gets(CLASS);
    cout<<"Nhap score: ";cin>>SCORE;
    PERSON::nhap();
}
void STUDENT::xuat(){
    cout<<setw(50)<<"----------XUAT THONG TIN----------"<<endl;
    y.xuat();
    cout<<"Ten lop: "<<CLASS<<endl;
    cout<<"Score: "<<SCORE<<endl;
    PERSON::xuat();
}
// void Sua(SCHOOL x){
//     strcpy(x.Name, "DHCNHN");
// }
int main(){
    STUDENT a;
    a.nhap();
    a.xuat();
    return 0;
}