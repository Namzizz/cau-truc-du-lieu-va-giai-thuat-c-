
//-------SINH XÂU NHỊ PHÂN KẾ TIẾP -------------------

#include<iostream>
#include<vector>
using namespace std;
//cấu hình đầu tiên
//cấu hình cuối cùng
//phương pháp sinh

//---------------------------------
//1.khởi tạo cấu hình đầu tiên
//2.while(khi chưa phải cấu hình cuối cùng)
//3.in ra cấu hình hiện tại
//4.sinh ra cấu hình tiếp theo

int n,k;vector<int>a;
bool ok=true;
void khoi_tao(){
    a.assign(n,0);
}
void sinh(){
    int i=n-1;
  while (i>=0&&a[i]==1)
  {
    a[i]=0;
    --i;
  }
  if(i<0){
  ok=false;
  }
  else{
    a[i]=1;
  }
}
bool check(){
  int sum=0;
  for (int i = 0; i <n; i++)
  {
    sum+=a[i];
  }
  return sum==k;
}
int main(){
  // Tối ưu tốc độ nhập xuất
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>n>>k;
  khoi_tao();
  while (ok)
  {
    if(check()){
    for(auto x:a){
        cout<<x;
    }
    cout<<endl;
  }
    sinh();
  }
}