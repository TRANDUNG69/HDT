#include<bits\stdc++.h>

using namespace std;

class ARRAY
{
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int m);
    ~ARRAY();
    void nhap();
    void xuat();
};
ARRAY::ARRAY(){
    n = 0;
    VALUE = NULL;
}
ARRAY::ARRAY(int m){
    n = m;
    VALUE = new int[n];
    for(int i = 0; i < n; i++)
        VALUE[i] = 0;
}
ARRAY::~ARRAY(){
    n = 0;
    VALUE = NULL;
    // hoặc
    // delete [] VALUE;
}

void ARRAY::nhap(){
    if(n==0){
        cout<<"Nhap n: ";
        cin>>n;
    }
    if(VALUE==NULL){
        VALUE = new int[n];
    }
    for(int i = 0; i < n; i++){
        cout<<"VALUE["<<i<<"] = ";
        cin>>VALUE[i];
    }
}
void ARRAY::xuat(){
    for(int i = 0; i < n; i++)
        cout<<VALUE[i]<<" ";
}
int main(){
    ARRAY x(8);
    cout<<endl<<"Mang vua khoi tao : ";
    x.xuat();
    cout<<endl<<"Nhap mang: "<<endl;
    x.nhap();
    cout<<endl<<"Mang vua nhap: ";
    x.xuat();
    return 0; 

}