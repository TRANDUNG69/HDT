#include<bits\stdc++.h>
using namespace std;

class ARRAY
{
    int n;
    float *a;
public:
    ARRAY operator--();
    ARRAY operator++();
    friend istream &operator>>(istream &x, ARRAY &y);
    friend ostream &operator<<(ostream &x, ARRAY y);
};
istream& operator>>(istream& x, ARRAY& y){
    cout<<"Nhap n: ";
    x>>y.n;
    y.a = new float[y.n];
    for(int i = 0; i < y.n; i++)
    {
        cout<<"a["<<i<<"] = ";
            x>>y.a[i];
    }
    return x;
}
ostream& operator<<(ostream& x, ARRAY y){
    for(int i = 0; i < y.n; i++)
        x<<y.a[i]<<" ";
    return x;
}
ARRAY ARRAY::operator++(){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    return *this;
}
ARRAY ARRAY::operator--(){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    return *this;
} 
int main(){
    ARRAY a;
    cout<<"Nhap mang a: "<<endl;
    cin>>a;
    ARRAY b=++a; 
    cout<<"Mang xep tang dan la: " << b << endl;
    ARRAY c=--a;
    cout<<"Mang xep giam dan la: " << c << endl;
    ofstream f("ARRAY.txt", ios::app);
    f<<"Mang xep tang dan la: "<<b<<endl;
    f<<"Mang xep giam dan la: "<<c<<endl;
    f.close();
    return 0;
}