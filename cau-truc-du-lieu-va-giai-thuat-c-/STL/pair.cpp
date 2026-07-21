#include<iostream>
#include<vector>
using namespace std;
int main(){
    // pair<int,int>pr=make_pair(10,20);
    // pair<int,int>pr1={30,40};
    // cout<<pr1.first<<" "<<pr1.second<<endl;
    int n;cin>>n;
    vector<pair<int,int>>v(n);
    for(auto &x:v){
        cin>>x.first>>x.second;
    }
    for(auto x:v){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}