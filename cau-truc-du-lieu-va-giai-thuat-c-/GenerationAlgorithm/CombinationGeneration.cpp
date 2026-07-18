

//--------SINH XÂU TỔ HỢP CHẬP K CỦA N PHẦN TỬ-----------
//LUÔN SẮP XẾP TỪ BÉ ĐẾN LỚN    

//giá trị tại i=n-k+i;([1]=n-k+1):cấu hình cuối cùng
#include<iostream>
#include<vector>
using namespace std;

int n,k;
vector<int>a;
bool ok=true;
void khoi_tao(){
    a.resize(k+1);//kích thước k+1 dùng duyệt từ 1 đến k
    for (int i = 1; i <=k; i++)//đầu tiên luôn là 1,...
    {
       a[i]=i;
    }
}
void sinh(){
    int i=k;//ví trí lớn nhất //1 2 3 vị trí i=k=3;
    while (i>=1&&a[i]==n-k+i)//n-k+i:số lớn nhất mà vị trí i=k có thể nhận được(cấu hình cuối cùng)
    {//VD:n=5;k=3;n-k+i=5-3+3=5 (tại vị trí i)
        --i;
    }
    if(i==0){
        ok=false;
    }
    else{
        a[i]++;
        for (int j = i+1; j <=k; j++)
        {
           a[j]=a[j-1]+1;
        }
    }
}
int main(){
    // Tối ưu tốc độ nhập xuất
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n>>k;
  khoi_tao();
  while(ok){
  for(int i=1;i<=k;i++){
    cout<<a[i];
  }
  cout<<endl;
  sinh();
}
}