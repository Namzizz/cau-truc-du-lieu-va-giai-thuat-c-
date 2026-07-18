

//-------------SINH HOÁN VỊ---------------

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//----------------------------CÁCH 1---------------------------
// int n;
// vector<int>a;
// bool ok=true;
// void khoi_tao(){
//     a.resize(n+1);
//     for (int i = 1; i <=n; i++)
//     {
//         a[i]=i;
//     }
// }
// void sinh(){
//    int i=n-1;
//    while (i>=1&&a[i]>a[i+1])//tìm số a[i]<a[i+1]
//    {
//       --i;//nếu a[i]>a[i+1] thì giảm i để tìm ra a[i]<a[i+1]
//    }
//    if(i==0) ok=false;//cấu hình cuối cùng
   
//    else{
//     int j=n;
//     //tìm a[i]<a[j]:trong đó a[j] là số lớn hơn a[i] và nhỏ nhất trong khoảng(i đến n)
//     while (a[i]>a[j]) --j;//nếu (đk vẫn không thỏa mãn) thì giảm j
    
//     swap(a[i],a[j]);//khi tìm ra a[j]>a[i] và nhỏ nhất thì swap() chúng
//     int l,r;
//     l=i+1;r=n;//đặt con trỏ l đến r
//     while(l<r){
//       swap(a[l],a[r]);//đảo ngược từ l đến r
//     ++l;--r;
//     }
//    }
// }
// int main(){
//     // Tối ưu tốc độ nhập xuất
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cin>>n;
//   khoi_tao();
//   while (ok)
//   {
//     for (int i = 1; i <=n; i++)
//     {
//        cout<<a[i];
//     }
//     cout<<endl;
//     sinh();
//   }
// }


//------------------------  CÁCH 2-------------------------------
int main(){
    int n;cin>>n;
   vector<int>a(n+1);//vì vòng lặp chạy từ 1 đến =n nên cần cấp phát n+1
   for (int i = 1; i <=n; i++)
   {
      a[i]=i;
   }
   do
   {
    for (int i = 1; i <=n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
   } while (next_permutation(a.begin()+1,a.end()));//từ vị trí 1 đến n-1 nếu không begin()+1 lẫn giá trị rác 0 dẫn đến hoán vị sai
   
}
