#include<iostream>
#include<vector>
using namespace std;
void nhap(int n,int m,vector<vector<int>>&a){
    for (int i = 1; i <=n; i++)
    {
      for (int j= 1; j <=m; j++)
      {
        cin>>a[i][j];
      }
    }
}
void sum_prefix(int n,int m,vector<vector<int>>&prefix,vector<vector<int>>&a){

    for (int i = 1; i <=n; i++)
    {
     for (int j = 1; j <=m; j++)
     {
        prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
     }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
   vector<vector<int>>a(n+1,vector<int>(m+1,0));
   vector<vector<int>>prefix(n+1,vector<int>(m+1,0));
    nhap(n,m,a);
    int x1,y1,x2,y2;//A(x1,y1),B(x2,y2);
   cin>>x1>>y1>>x2>>y2;
    sum_prefix(n,m,prefix,a);
   int prefix_two;
   prefix_two=prefix[x2][y2]-prefix[x2][y1-1]-prefix[x1-1][y2]+prefix[x1-1][y1-1];
   cout<<"TONG :"<<prefix_two;

}