#include<iostream>
#include<vector>
using namespace std;

//cộng dồn mảng 1 chiều
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL); // Tối ưu tốc độ nhập xuất
 int n;cin>>n;
 vector<int>a(n+1);
 vector<int>F(n+1,0);
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
 }
 for (int i = 0; i <n; i++)
 {
    if(i==0)F[0]=a[0];
    else F[i]=F[i-1]+a[i];
 }
 int q;cin>>q;
    while (q--)
    {
     int l,r;
    cin>>l>>r;
     --l;--r;
    int sum=F[r]-F[l-1];
    cout<<sum<<endl;
    }
    return 0;
}