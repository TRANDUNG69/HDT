#include<bits\stdc++.h>

using namespace std;
class ARRAY
{
    int n;
    int *a;
public:
    void nhap();
    void Sort();
    void xuat();
};
void ARRAY::nhap()
{
    cout<<"Nhap n: ";
    cin>>n;
    a = new int[n];
    for(int i = 0; i < n; i++){
        cout<<"a["<<i<<"]= ";
        cin >>a[i];
    }
}
void ARRAY::xuat(){
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
void ARRAY::Sort(){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main(){
    ARRAY b;
    b.nhap();
    b.Sort();
    cout<<"Mang sau khi sap xep tang dan la: ";
    b.xuat();
    return 0;
}