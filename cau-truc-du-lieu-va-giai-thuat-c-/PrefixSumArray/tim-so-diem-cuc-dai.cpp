#include<iostream>
#include<vector>
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void nhap(int n,int m,vector<vector<int>>&a){
    for (int i = 0; i <n; i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}

int main(){
  int n,m;cin>>n>>m;
   vector<vector<int>>a(n,vector<int>(m));
   nhap(n,m,a);
   int dem_cd=0;
   for (int i = 0; i <n; i++)
   {
    for (int j = 0; j <m; j++)
    { 
        bool check=true;
        for(int k=0;k<8;k++){
        int i1=i+dx[k];int j1=j+dy[k];
         if(i1>=0&&i1<n&&j1>=0&&j1<m){
            if(a[i1][j1]>=a[i][j]){
                check=false;
                break;
            }
         }
     }
     if(check) {
        dem_cd+=1;
        cout<<"gia tri cuc dai:"<<a[i][j]<<endl;
     }
    }
   }
   cout<<"so diem cuc dai : "<<dem_cd;
}