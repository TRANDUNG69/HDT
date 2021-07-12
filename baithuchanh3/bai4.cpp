#include<bits\stdc++.h>

using namespace std;

class PTB2
{
    int a, b, c;
public:
    void nhap();
    void xuat();
    void GIAI();
    PTB2();
    PTB2(int x, int y, int z);
};
void PTB2::nhap(){
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
}
void PTB2::xuat(){
    cout<<a<<"x"<<(char)253<<" + "<<b<<"x + "<<c<<" = 0"<<endl;
}

void PTB2::GIAI(){
    if(a==0)
    {
        if(b==0)
        {
            if(c==0){
                cout<<"Phuong trinh vo so nghiem"<<endl;
            }
            else
            {
                cout<<"Phuong trinh vo ngiem"<<endl;
            }
        }
        else{
           cout<<"Phuong trinh co nghiem: "<<-c/b<<endl; 
        }
    }
    else{
        int delta =(b * b) - (4 * a * c);
        if(delta < 0)
        {
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else if(delta > 0)
        {
            cout<<"Phuong trinh co nghiem: "<<(float)(-b+sqrt(delta))/(2*a)<<endl;
            cout<<"Phuong trinh co nghiem: "<<(float)(-b-sqrt(delta))/(2*a)<<endl;
        }
        else
        {
            cout<<"Phuong trinh co nghiem duy nhat: "<<(float)-b/2*a<<endl;
        }
    }
}
PTB2::PTB2(){
    a=b=c=0;
}
PTB2::PTB2(int x, int y, int z){
    a = x;
    b = y;
    c = z;
}
int main(){
    PTB2 P;
    P.nhap();
    P.xuat();
    P.GIAI();

    PTB2 Q(2, 5, 8);
    Q.xuat();
    Q.GIAI();
    return 0;
}