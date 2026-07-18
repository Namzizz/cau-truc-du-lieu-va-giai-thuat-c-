#include<iostream>
#include<vector>
using namespace std;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int n,m;
void nhap(int n,int m,vector<vector<int>>&a){
  for (int i = 0; i <n; i++)
  {
    for (int j = 0; j <m; j++)
    {
        cin>>a[i][j];
    }
  }
}
void DPS(int i,int j,vector<vector<int>>&a){
     a[i][j]=0;
        for (int k = 0; k < 4; k++)
        {
        int i1=i+dx[k];int j1=j+dy[k];
        if(i1>=0&&j1>=0&&i1<n&&j1<m){
         if(a[i1][j1]==1){
            DPS(i1,j1,a);
      }      
    }
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 cin>>n>>m;
 //phải nhập dữ liệu n,m xong mới khai báo vector<...>...
 vector<vector<int>>a(n,vector<int>(m));
 nhap(n,m,a);
 int so_mien=0;
 for (int i = 0; i <n; i++)
 {
    for (int j = 0; j < m; j++)
    { 
        
        if(a[i][j]==1){
            so_mien+=1;
            DPS(i,j,a);
        }
    }
 }
 cout<<"so mien :"<<so_mien<<endl;
}