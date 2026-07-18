

//------------SINH PHÂN HẠCH (TÁCH TỔNG)--------------
#include<iostream>
#include<vector>
using namespace std;

 int n;
 vector<int>a;
 bool ok=true;
void khoi_tao(int n){
    a.clear();
    a.push_back(n);
}
void sinh(){
    int i=a.size()-1;
    while (i>=0&&a[i]==1)
    {
        --i;
    }
    if(i<0){
        ok=false;
    }
    else{
        a[i]--;
        //tìm số 1 bị bỏ qua
        int So1BoQua=(a.size()-1)-i;
        //a[i]-1 thì d tổng bỏ qua phải tổng số 1 bị bỏ qua +1 đơn vị
        int d=So1BoQua+1;
        //xóa toàn bộ phần bên phải i
        a.resize(i+1);
        int PhanBo_d=d/a[i];
        int PhanDu_d=d%a[i];
        for (int i =1; i <=PhanBo_d; i++)
        {
            a.push_back(a[i]);
        }
        if(PhanDu_d>0){
            a.push_back(PhanDu_d);
        }
        
    }
}

int main(){
  cin>>n;
  khoi_tao(n);
  while (ok)
  {
    for(auto x:a){
        cout<<x;
    }
    cout<<endl;
    sinh();
  }
}