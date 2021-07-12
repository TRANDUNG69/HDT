#include<bits\stdc++.h>
using namespace std;

class HCN
{
    int D, R;
public:
    void nhap();
    void VE();
    float DIENTICH();
    float CHUVI();
};

void HCN::nhap(){
    cout<<"Nhap chieu dai hinh chu nhat: ";cin>>D;
    cout<<"Nhap chieu rong hinh chu nhat: ";cin>>R;
}
void HCN::VE(){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < D; j++)
            cout<<" * ";  
        cout<<endl;
    }
}
float HCN::DIENTICH()
{
    return D * R;
}
float HCN::CHUVI()
{
    return (D + R) * 2;
}
int main(){
    HCN a;
    a.nhap();
    a.VE();
    cout<<"Dien tich cua hinh chu nhat la:  "<<a.DIENTICH()<<endl;
    cout<<"Chu vi cua hinh chu nhat la:  "<<a.CHUVI()<<endl;
}